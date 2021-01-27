#include <iostream>
#include <queue>
#include <string>
#include <stdio.h>
using namespace std;

int main(){
    queue<int> q, yo;
    int n,k;
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++){
        q.push(i);
    } //정수가 들어있는 큐 생성
    while(!q.empty()){
        for(int j=0;j<k;j++){
            if(j==k-1) yo.push(q.front());
            else q.push(q.front());
            q.pop();
        }
    }
    printf("<");
    for(int i=1;i<n;i++){
        printf("%d, ",yo.front());
        yo.pop();
    }
    printf("%d>",yo.front());
    return 0;
}