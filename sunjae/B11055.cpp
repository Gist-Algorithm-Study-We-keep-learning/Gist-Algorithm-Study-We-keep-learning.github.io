#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int data[n], dp[n]={},maxIndex[n],t[n];
    //data(���� ����), dp(���ϰ��� �ϴ� �ִ� �����ϴ� ����),maxIndex(�����ϴ� ������ ���� ū ���� �ε��� ��ȣ), t(data�� �����ϴ� �����ϴ� �κ� ����)
    for(int i=0;i<n;i++) cin>>data[i];


    dp[0]=data[0]; maxIndex[0]=0; t[0]=data[0];
    for(int i=1;i<n;i++){ 
        int max=0;
        t[i]=data[i];
        for(int k=1;k<=i;k++){
            if(data[i-k]<data[i]&&max<t[i-k]) max=t[i-k];
        }
        t[i]+=max;
        //data[i]�� ������ ���� ū �����ϴ� �κм���>>t[i]
        
        
        if(t[i]>dp[i-1]){//data[i]�� �����ϴ� �κм����� �� ū ���
            dp[i]=t[i];
            maxIndex[i]=i;
        }
        else{//data[i]�� �������� �ʴ� �κм����� �� ū ���
            dp[i]=dp[i-1];
            maxIndex[i]=maxIndex[i-1];
        }
    }
    
    cout<<dp[n-1];
    return 0;
}