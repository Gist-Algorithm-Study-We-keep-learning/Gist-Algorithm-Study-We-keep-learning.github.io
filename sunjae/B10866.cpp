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
        if(!cmd.compare("push_front")){
            scanf("%d",&k);
            q.push(k);
            for(int j=1;j<q.size();j++){
                q.push(q.front());
                q.pop();
            }
            
        }
        if(!cmd.compare("push_back")){
            scanf("%d",&k);
            q.push(k);
        }
        if(!cmd.compare("pop_front")){
            if(q.empty()) printf("-1\n");
            else{
                printf("%d\n",q.front());
                q.pop();
            }
        }
        if(!cmd.compare("pop_back")){
            if(q.empty()) printf("-1\n");
            else{
                printf("%d\n",q.back());
                for(int j=1;j<q.size();j++){
                    q.push(q.front());
                    q.pop();
                }//이러면 뭐가 달라질까여
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