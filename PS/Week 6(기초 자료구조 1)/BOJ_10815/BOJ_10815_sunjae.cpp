#include <iostream>
#include <algorithm>

using namespace std;

float byte_calcul(int n){
    return 4*n/1024/1024;
}
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
   // cout<<byte_calcul(1000000);
    int n,m,k;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
 /*   for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }*/
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        scanf("%d",&k);
        if(k<a[0]||k>a[n-1]) printf("0 ");
        else printf("%d ",find(a,n,k));

    }
    return 0;
}