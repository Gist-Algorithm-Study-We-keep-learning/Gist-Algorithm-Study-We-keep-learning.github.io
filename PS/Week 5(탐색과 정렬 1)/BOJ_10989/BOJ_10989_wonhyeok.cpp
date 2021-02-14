#include <cstdio>
#include <cstring>

using namespace std;

int main(void){
	int stack[10001], N, cnt=0, num;
	char order[101];
	scanf("%d", &N);
	
	for(int i=0; i<N; i++){
		scanf(" %s", order);
		if(strcmp(order, "push")==0){
			scanf("%d", &num);
			stack[cnt] = num;
			cnt++;
		}
		else if(strcmp(order, "top")==0){
			if(cnt!=0)
				printf("%d\n", stack[cnt-1]);
			else
				printf("-1");
		}
		else if(strcmp(order, "pop")==0){
			if(cnt==0)
				printf("-1");
			else{
				printf("%d\n", stack[cnt-1]);
				cnt--;
			}
		}
		else if(strcmp(order, "size")==0){
			printf("%d\n", cnt);
		}
		else{
			if(cnt==0)
				printf("1\n");
			else
				printf("0\n");
		}
	}
}
