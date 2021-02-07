#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    unsigned long dp[n]={1,2,}; 
    for(int i=2;i<n;i++){
        dp[i]=dp[i-2]+dp[i-1];
        dp[i]%=10007;
    }
    cout<<dp[n-1];
    return 0;
}