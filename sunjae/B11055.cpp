#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int data[n], dp[n]={},maxIndex[n],t[n];
    //data(원래 수열), dp(구하고자 하는 최대 증가하는 수열),maxIndex(증가하는 수열의 가장 큰 수의 인덱스 번호), t(data를 포함하는 증가하는 부분 수열)
    for(int i=0;i<n;i++) cin>>data[i];


    dp[0]=data[0]; maxIndex[0]=0; t[0]=data[0];
    for(int i=1;i<n;i++){ 
        int max=0;
        t[i]=data[i];
        for(int k=1;k<=i;k++){
            if(data[i-k]<data[i]&&max<t[i-k]) max=t[i-k];
        }
        t[i]+=max;
        //data[i]를 포함한 가장 큰 증가하는 부분수열>>t[i]
        
        
        if(t[i]>dp[i-1]){//data[i]를 포함하는 부분수열이 더 큰 경우
            dp[i]=t[i];
            maxIndex[i]=i;
        }
        else{//data[i]를 포함하지 않는 부분수열이 더 큰 경우
            dp[i]=dp[i-1];
            maxIndex[i]=maxIndex[i-1];
        }
    }
    
    cout<<dp[n-1];
    return 0;
}