#include <cstdio>

using namespace std;

int ans=0;
void func(int total, bool operate, int cnt, int Num[], int N, int S){
	if(cnt==N){
		if(total==S && operate)
			ans++;
	}
	else{
		total += Num[cnt];
		func(total, true, cnt+1, Num, N, S);
		total -= Num[cnt];
		func(total, operate, cnt+1, Num, N, S);	
	}	
}
int main(void){
	int N, S, Num[21];
	scanf("%d %d", &N, &S);
	
	for(int i=0; i<N; i++)
		scanf("%d", &Num[i]);
	
	func(0, false, 0, Num, N, S);
	printf("%d", ans);
}
