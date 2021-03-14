#include <iostream>
#include <algorithm>

using namespace std;

int find(int k,long a[],int n){
    int l=0,r=n-1,m;
    while(l<=r){
        m=(l+r)/2;
        if(k<a[m]) r=m-1;
        else if(k>a[m]) l=m+1;
        else if(m>1&&k!=a[m-1]) break;
        else if(m>1&&k==a[m-1]) r=r-2;
    }
    if(a[m]==k) return m;
    else return -1;
}

int main(){
    int n,m,cnt,k;
    cin>>n;
    long a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    cin>>m;
    long b[m];
    for(int i=0;i<m;i++) cin>>b[i];
    for(int i=0;i<m;i++){
        k=find(b[i],a,n);
        //printf("(%d)",k);
        cnt=0;
        if(k==-1){ 
            printf("0 ");
        }
        else{
            
            while(b[i]==a[k]){
                cnt++;
                k++;
            }
            printf("%d ",cnt);
        }    
        
    }
    return 0;
}