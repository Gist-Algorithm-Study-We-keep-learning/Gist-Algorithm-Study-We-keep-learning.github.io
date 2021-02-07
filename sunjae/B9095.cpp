#include <iostream>

using namespace std;

int main(){
    int t,n;
    cout<<"input";
    cin>>t;
    for(int k=0;k<t;k++){
        cin>>n;
        int dp[n+1]={0,1,2,4,},a2[n+1]={0,0,1,2,},a3[n+1]={0,0,0,1,};
        for(int i=4;i<=n;i++){//1로만 만들 수 있는 경우는 1개 뿐이므로 생략
            a2[i]=a2[i-2]+a2[i-1]+1;
            a3[i]=a3[i-1]+a2[i-3];
            dp[i]=a2[i]+a3[i]+1;
        }
        cout<<dp[n]<<'\n';
    }
    return 0;
}