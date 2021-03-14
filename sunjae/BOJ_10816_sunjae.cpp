#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n,m;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++) cin>>b[i];
    
    sort(a,a+n);
    for(int i=0;i<m;i++){
        auto low=lower_bound(a,a+n,b[i]);
        auto up=upper_bound(a,a+n,b[i]);
        cout<<up-low<<" ";
    }
    return 0;
}