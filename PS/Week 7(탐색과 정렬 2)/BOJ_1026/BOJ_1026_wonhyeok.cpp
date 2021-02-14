#include <cstdio>
#include <algorithm>

using namespace std;
bool comp(int a, int b){
	return a>b;
}
int main(void){
	int N, A[51], B[51], ans=0;
	
	scanf("%d", &N);
	
	for(int i=0; i<N; i++)
		scanf("%d", &A[i]);
	for(int i=0; i<N; i++)
		scanf("%d", &B[i]);
		
	sort(A, A+N);
	sort(B, B+N, comp);
	
	for(int i=0; i<N; i++)
		ans += A[i]*B[i];
		
	printf("%d", ans);
}
