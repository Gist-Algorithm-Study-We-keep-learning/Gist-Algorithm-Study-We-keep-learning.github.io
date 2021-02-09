#include <cstdio>
#include <algorithm>

using namespace std;

int main(void){
	int N, num[1001];
	scanf("%d", &N);
	
	for(int i=0; i<N; i++)
		scanf("%d", &num[i]);

	sort(num, num+N);
	
	for(int i=0; i<N; i++)
		printf("%d\n", num[i]);
}
