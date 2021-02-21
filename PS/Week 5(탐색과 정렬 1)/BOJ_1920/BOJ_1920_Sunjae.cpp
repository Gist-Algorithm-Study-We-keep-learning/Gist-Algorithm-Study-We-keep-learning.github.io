#include <iostream>
#include <algorithm>

using namespace std;

int find(int a[],int n,int k){
    int left=0, right=n-1,mid;
    do{
        mid=(left+right)/2;
        if(a[mid]==k) return 1;
        else if(a[mid]>k) right=mid-1;
        else left=mid+1;
    }while(left<=right);
    return 0;
}

int main(){
    int n,m,k;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>k;
        if(k<a[0]||k>a[n-1]) printf("0\n");
        else printf("%d\n",find(a,n,k));
    }
}