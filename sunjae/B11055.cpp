#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n], dp[n]={},maxIndex[n],t[n];
    for(int i=0;i<n;i++) cin>>a[i];
    dp[0]=a[0]; maxIndex[0]=0; t[0]=a[0];
    for(int i=1;i<n;i++){ 
        int max=0;
        t[i]=a[i];
        for(int k=1;k<=i;k++){//a[i]를 포함한 가장 큰 부분수열.
            if(a[i-k]<a[i]&&max<t[i-k]) max=t[i-k];
        }
        t[i]+=max;
        if(t[i]>dp[i-1]){
            dp[i]=t[i];
            maxIndex[i]=i;
        }
        else{
            dp[i]=dp[i-1];
            maxIndex[i]=maxIndex[i-1];
        }
    }
    cout<<dp[n-1];
    return 0;
}