#include <cstdio>
#include <algorithm>

using namespace std;

int Num[1000001];
bool comp(int a, int b){
	return a<b;
}
int main(void){
	int N;
	scanf("%d", &N);	

	for(int i=0; i<N; i++)
		scanf("%d", &Num[i]);
	
	sort(Num, Num+N, comp);
	
	for(int i=0; i<N; i++)
		printf("%d\n", Num[i]);
}
