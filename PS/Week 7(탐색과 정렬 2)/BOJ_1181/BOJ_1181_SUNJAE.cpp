#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool compare(string s1, string s2){
    if(s1.length()==s2.length()){
        return s1<s2;
    }
    else{
        return s1.length()<s2.length();
    }
}

int main(){
    int n; 
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++) cin>>s[i];
    sort(s,s+n,compare);
    cout<<s[0]<<'\n';
    for(int i=1;i<n;i++){ 
        if(s[i-1]!=s[i]) cout<<s[i]<<'\n';
        else continue;
    } 
    return 0;
}