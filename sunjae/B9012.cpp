#include <iostream>
#include <string>
#include <stack>
#include <stdio.h>

using namespace std;


int main(){
    int psnum;
    string ps;
    stack<char> s;
    scanf("%d",&psnum);
    for(int i=0,j;i<psnum;i++){
        cin >> ps;
        for(j=0;j<ps.length();j++){
            if(ps.length()%2!=0){
                printf("NO\n");
                break;
            }
            if(ps.at(j)=='(') s.push('0');
            else{
                if(s.empty()){
                    printf("NO\n"); break;
                }
                else if(j+1==ps.length()&&s.size()==1){
                    printf("YES\n");
                }
                s.pop();
            }

        }
        if(!s.empty()) printf("NO\n");

        while(!s.empty()) s.pop();
    }
    return 0;
}