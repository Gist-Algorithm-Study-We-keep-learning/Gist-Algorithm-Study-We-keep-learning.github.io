#include <stdio.h>
#include <iostream>




int main(){
    int n;
    int dp[50001]={0,0,0,1,-1,1,};
    //printf("INPUT:");
    scanf("%d",&n);
    for(int i=3;i<=n;i++){
        if(dp[i]!=0) continue;
        if(i%5==0) dp[i]=n/5;
        else if(dp[i-5]!=0) dp[i]=dp[i-5]+1;
        else if(dp[i-3]!=0) dp[i]=dp[i-3]+1;
        else if(i%3==0) dp[i]=i/3;
        else dp[i]=-1;
    }
    printf("%d",dp[n]);
    return 0;
}