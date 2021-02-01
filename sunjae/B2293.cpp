#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    int data[n];
    for(int i=0;i<n;i++){
        cin>>data[i];
    }
    sort(data,data+n);

    for(int i=0;i<k/data[n-1];i++){
        

    }
    return 0;
}