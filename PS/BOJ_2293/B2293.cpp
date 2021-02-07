#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    int data[n],dp[k+1]={0,};
    for(int i=0;i<n;i++){
        cin>>data[i];
    }
    sort(data,data+n);

    for(int j=0;j<n;j++){
        for(int i=data[j];i<=k;i++){
            if(data[j]==i) dp[i]+=1;
            else dp[i]+=dp[i-data[j]]; 
           // cout<<dp[i]<<' ';
        }
      //  cout<<'\n';
    }
    cout<<dp[k];
    return 0;
}