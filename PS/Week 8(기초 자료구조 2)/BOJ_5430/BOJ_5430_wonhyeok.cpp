#include <cstdio>
#include <cstring>
#include <deque>

using namespace std;

int main(void){
	int T, n;
	char p[100001], input[800001];
	scanf("%d", &T);
	
	for(int i=0; i<T; i++){
		bool frontmode = true;
		bool success = true;
		deque <char*> dq;
		char *ptr;
		
		scanf("%s", p);
		scanf("%d", &n);
		scanf("%s", input);
		int len = strlen(p);
		
		ptr = strtok(input, "[,]");
		while(ptr!=NULL){
			dq.push_back(ptr);
			ptr = strtok(NULL, "[,]");
		}
		
		for(int i=0; i<len; i++){
			if(p[i]=='R'){
				frontmode = !frontmode;
			}
			else{
				if(dq.empty()){
					success = false;
					break;
				}
				else{
					if(frontmode){
						dq.pop_front();
					}
					else
						dq.pop_back();	
				}
			}
		}
		
		if(!success)
			printf("error\n");
		else{
		if(frontmode){
			printf("[");
			while(!dq.empty()){
				if(dq.size()==1)
					printf("%s", dq.front());
				else
					printf("%s,", dq.front());
				dq.pop_front();
			}
			printf("]\n");
		}
		else{
			printf("[");
			while(!dq.empty()){
				if(dq.size()==1)
					printf("%s", dq.front());
				else
					printf("%s,", dq.back());
				dq.pop_back();
			}
			printf("]\n");
		}	
		}
		
	}
}
