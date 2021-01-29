#include <iostream>
#include <stdio.h>
#include <queue>

using namespace std;

int main(){
    int n;
    queue<int> q;
    cin>>n;
    for(int i=1;i<=n;i++) q.push(i);
    for(int i=0;q.size()>1;i++){
        if(i%2!=0) q.push(q.front());
        q.pop();
    }
    cout<<q.front();
    return 0;
}