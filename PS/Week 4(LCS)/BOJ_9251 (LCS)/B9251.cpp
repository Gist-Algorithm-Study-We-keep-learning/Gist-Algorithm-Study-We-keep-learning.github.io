#include <iostream>
#include <string>

using namespace std;

int max(int a,int b){
    if(a>b) return a;
    else return b;
}

int main(){
    string s1,s2;
    cin>>s1;
    cin>>s2;
    int lcs[s1.length()+1][s2.length()+1];
    for(int i=0;i<=s1.length();i++){
        for(int j=0;j<=s2.length();j++) lcs[i][j]=0;
    }

    for(int i=1;i<=s1.length();i++){
        for(int j=1;j<=s2.length();j++){
            if(s1.at(i-1)==s2.at(j-1)) lcs[i][j]=lcs[i-1][j-1]+1;
            else lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
            cout<<lcs[i][j]<<' ';
        }
        cout<<'\n';
    }
    cout<<lcs[s1.length()][s2.length()];
    return 0;
}