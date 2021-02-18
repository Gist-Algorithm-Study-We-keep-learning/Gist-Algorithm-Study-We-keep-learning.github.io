#include <cstdio>

using namespace std;

int ans;

void func(int n){
	if(n==0)
		ans++;
	else if(n>0){
		func(n-1);
		func(n-2);
		func(n-3);
	}
}
int main(void){
	int T, n;
	scanf("%d", &T);
	
	for(int i=0; i<T; i++){
		scanf("%d", &n);
		ans = 0;
		func(n);
		printf("%d\n", ans);
	}
}
