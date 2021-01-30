#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

int dp[16]={};
vector<pair<int,int>> v;


int max(int a[],int n){
    int max=a[0],tmp=0;
    for(int i=1;i<=n;i++){
        tmp=a[i];
        if(tmp>max) max=tmp;
    }
    return max;
}

int main(){
    int n;
    pair<int,int> p;
    
    cin>>n;
    for(int i=0;i<n;i++){
        scanf("%d%d",&p.first,&p.second);
        v.push_back(p);
    }
    for(int k=0;k<n;k++){
        int tmp[k+1]={};
        if(v[k].first==1) tmp[k]=dp[k]+v[k].second;
        for(int i=1;i<=k;i++){
            if(v[k-i].first<=i+1) tmp[k-i]=dp[k-i]+v[k-i].second;
        }
        dp[k+1]=max(tmp,k);
    }
    printf("%d",dp[n]);
    return 0;
}