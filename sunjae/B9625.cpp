#include <iostream>

using namespace std;

int main(){
    int k;
    cin>>k;
    int a[k+1]={0,0,1,},b[k+1]={0,1,1,};
    for(int i=3;i<=k;i++){
        a[i]=a[i-2]+a[i-1];
        b[i]=b[i-1]+b[i-2];
    }
    cout<<a[k]<<' '<<b[k];
    return 0;
}