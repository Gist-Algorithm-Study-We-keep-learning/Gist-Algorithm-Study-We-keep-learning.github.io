#include <stdio.h>
#include <iostream>
#include <stack>

using namespace std;

int main(){
    int n,k,sum=0;
    stack<int> s;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>k;
        if(k==0) s.pop();
        else s.push(k);
    }
    while(!s.empty()){
        sum+=s.top();
        s.pop();
    }
    cout<<sum;
    return 0;

}