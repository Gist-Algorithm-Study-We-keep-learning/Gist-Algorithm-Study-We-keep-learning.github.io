#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n,k,i,j,t;
    scanf("%d%d",&n,&k);
    int data[n],mcase[k+1],dp[k+1]={-1,};
    for(i=0;i<n;i++){
        cin>>data[i];
    }
    sort(data,data+n);

    for(i=0;i<=k;i++){
        for(j=0;j<n;j++) mcase[i]=-1;
    }

    for(j=0;j<n;j++){
        for(i=data[j];i<=k;i++){
            if(i%data[j]==0) mcase[i]=i/data[j];
            else if(mcase[i-data[j]]!=-1&&(mcase[i]==-1||mcase[i]>mcase[i-data[j]]))mcase[i]=mcase[i-data[j]]+1; 
         //   cout<<mcase[i]<<' ';
        }
     //   cout<<'\n';
    }
    cout<<mcase[k];
    return 0;
}