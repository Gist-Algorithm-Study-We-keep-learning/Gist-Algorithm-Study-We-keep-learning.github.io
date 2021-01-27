#include <stdio.h>
#include <iostream>
int max(int a, int b){
    if(a>b) return a;
    else return b;
}
int main(){
    int n,cnt=-1,m;
    scanf("%d",&n);
    int it[n*(n+1)/2];
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            scanf("%d",&it[++cnt]);
            if(i+j==0) continue;
            else if(j==0) it[cnt]+=it[cnt-i];
            else if(j==i) it[cnt]+=it[cnt-i-1];
            else it[cnt]+=max(it[cnt-i],it[cnt-i-1]);
        }
    }
    m=it[cnt];
    for(int i=0;i<n;i++){
        if(m<it[cnt-i]) m=it[cnt-i];
    }
    printf("%d",m);
    return 0;
}