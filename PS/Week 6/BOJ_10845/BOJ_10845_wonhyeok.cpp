#include <cstdio>
#include <queue>
#include <cstring>

using namespace std;

int main(void){
	int N, num;
	char order[101];
	queue <int> q;
	scanf("%d", &N);
	
	for(int i=0; i<N; i++){
		scanf("%s", order);
		if(strcmp(order, "push")==0){
			scanf("%d", &num);
			q.push(num);
		}
		else if(strcmp(order, "front")==0){
			if(q.empty())
				printf("-1\n");
			else
				printf("%d\n", q.front());
		}
		else if(strcmp(order, "size")==0){
			printf("%d\n", q.size());
		}
		else if(strcmp(order, "empty")==0){
			printf("%d\n", q.empty());
		}
		else if(strcmp(order, "back")==0){
			if(q.empty()){
				printf("-1\n");
			}
			else{
				printf("%d\n", q.back());
			}
		}
		else{
			if(q.empty())
				printf("-1\n");
			else{
				printf("%d\n", q.front());
				q.pop();
			}
		}
	}
}
