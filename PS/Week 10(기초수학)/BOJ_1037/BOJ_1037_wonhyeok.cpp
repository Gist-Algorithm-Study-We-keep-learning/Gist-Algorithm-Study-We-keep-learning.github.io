#include <cstdio>
#include <algorithm>

using namespace std;

int main(void){
	int N, maxi=-1, mini = 1000001, num;
	scanf("%d", &N);
	
	for(int i=0; i<N; i++){
		scanf("%d", &num);
		maxi = max(num, maxi);
		mini = min(num, mini);
	}
	printf("%d",maxi*mini);
}
