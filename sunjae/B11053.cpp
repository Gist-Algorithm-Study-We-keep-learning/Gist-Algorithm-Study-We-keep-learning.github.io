#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int data[n],cnt[n],dp[n];
    //data(원래 수열), dp(구하고자 하는 최대 증가하는 수열),maxIndex(증가하는 수열의 가장 큰 수의 인덱스 번호), t(data를 포함하는 증가하는 부분 수열)
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