#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int data[n],cnt[n],dp[n];
    //data(���� ����), dp(���ϰ��� �ϴ� �ִ� �����ϴ� ����),maxIndex(�����ϴ� ������ ���� ū ���� �ε��� ��ȣ), t(data�� �����ϴ� �����ϴ� �κ� ����)
    for(int i=0;i<n;i++) cin>>data[i];

    cnt[0]=1; dp[0]=1;
    for(int i=1;i<n;i++){ 
        int maxcnt=0;
        for(int k=1;k<=i;k++){
            if(data[i-k]<data[i]&&maxcnt<cnt[i-k]) maxcnt=cnt[i-k];
        }
        cnt[i]=maxcnt+1;
        if(dp[i-1]>cnt[i]) dp[i]=dp[i-1];
        else dp[i]=cnt[i];
    }
    cout<<dp[n-1];
    return 0;
}