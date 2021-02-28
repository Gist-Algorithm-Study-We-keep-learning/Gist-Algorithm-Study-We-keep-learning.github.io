#include <iostream>
#include <queue>
#include <string>
#include <stdio.h>
using namespace std;

int main(){
    int cnum, k;
    string cmd;
    queue<int> q;
    scanf("%d",&cnum);
    for(int i=0;i<cnum;i++){
        cin >> cmd;
        if(!cmd.compare("push")){
            scanf("%d",&k);
            q.push(k);
        }
        if(!cmd.compare("pop")){
            if(q.empty()) printf("-1\n");
            else{
                printf("%d\n",q.front());
                q.pop();
            }
        }
        if(!cmd.compare("size")) printf("%d\n",q.size());
        if(!cmd.compare("empty")) printf("%d\n",q.empty());
        if(!cmd.compare("front")){
            if(q.empty()) printf("-1\n");
            else printf("%d\n",q.front());
        }
        if(!cmd.compare("back")){
            if(q.empty()) printf("-1\n");
            else printf("%d\n",q.back());
        }

    }
    return 0;
}