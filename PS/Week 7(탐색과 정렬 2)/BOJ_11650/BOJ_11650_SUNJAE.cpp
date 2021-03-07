#include <iostream>
#include <algorithm>
//#include <utility>

using namespace std;

bool compare(pair<int,int> p1, pair<int,int> p2){
    if(p1.first==p2.first) return p1.second<p2.second;
    else return p1.first<p2.first;
}

int main(){
    int n;
    cin>>n;
    pair<int,int> p[n];
    for(int i=0;i<n;i++){
        scanf("%d%d",&p[i].first,&p[i].second);
    }
    sort(p,p+n,compare);
    for(int i=0;i<n;i++) printf("%d %d\n",p[i].first,p[i].second);
    return 0;
}