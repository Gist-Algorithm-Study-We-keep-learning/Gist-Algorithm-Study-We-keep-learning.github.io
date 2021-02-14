#include <iostream>
#include <string>
#include <stack>

using namespace std;

int max(int a,int b){
    if(a>b) return a;
    else return b;
}

int main(){
    string s1,s2;
    stack<char> LCS;
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
            //cout<<lcs[i][j]<<' ';
        }
       // cout<<'\n';
    }
    int i=s1.length(), j=s2.length();
    while(i>0&&j>0){
        if(lcs[i][j]==lcs[i-1][j]){
            i--;
            continue;
        }
        else if(lcs[i][j]==lcs[i][j-1]){
            j--;
            continue;
        }
        else{
            LCS.push(s1.at(i-1));
            i--; j--;
        }
    }

    cout<<lcs[s1.length()][s2.length()]<<'\n';
    while(!LCS.empty()){
        cout<<LCS.top();
        LCS.pop();
    }
    
    return 0;
}