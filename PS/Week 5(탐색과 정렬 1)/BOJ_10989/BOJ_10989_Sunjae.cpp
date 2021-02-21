#include <iostream>

using namespace std;

int main(){
    int c[10001]={},n,k;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&k);
        c[k]++;
        
    }
    for(int i=1;i<=10001;i++){
        if(c[i]==0) continue;
        else{
            printf("%d\n",i);
            c[i]--; i--; 
        }
    }
    return 0;
}