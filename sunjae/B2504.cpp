#include <iostream>
#include <string>
#include <stack>
#include <stdio.h>

using namespace std;


int main(){
    int result=1,tmp=0;
    string ps;
    stack<char> s;
    cin>>ps;
    for(int i=0;i<ps.length();i++){
        if(ps.at(i)=='(') s.push('(');
        else if(ps.at(i)=='[') s.push('[');
        else if(ps.at(i)==')'){
                if(s.top()=='('){ result*=tmp; tmp=0;}
                else tmp+=2;
        }
        else{
            if(s.top()=='['){ result*=tmp; tmp=0;}
            else tmp+=3;
        }
    }
    cout<<result;
    return 0;
}