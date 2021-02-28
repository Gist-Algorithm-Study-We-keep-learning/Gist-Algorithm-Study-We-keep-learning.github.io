#include <iostream>
#include <stack>
#include <string>
#include <stdio.h>
using namespace std;
int main(){
    int cnum, k;
    string cmd;
    stack<int> s;
    scanf("%d",&cnum);
    for(int i=0;i<cnum;i++){
        cin >> cmd;
        if(!cmd.compare("push")){
            scanf("%d",&k);
            s.push(k);
        }
        if(!cmd.compare("pop")){
            if(s.empty()) printf("-1\n");
            else{ 
                printf("%d\n",s.top());
                s.pop();
            }
        }
        if(!cmd.compare("size")) printf("%d\n",s.size());
        if(!cmd.compare("empty")) printf("%d\n",s.empty());
        if(!cmd.compare("top")){
            if(s.empty()) printf("-1\n");
            else printf("%d\n",s.top());
        }

    }
    return 0;
}