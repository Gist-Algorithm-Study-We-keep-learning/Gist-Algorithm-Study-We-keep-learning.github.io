#include <cstdio>
#include <vector>
using namespace std;

bool find(int n){
	if(n==1)
		return false;
	for(int i=2; i<n; i++){
		if(n%i==0)
			return false;
	}
	return true;
}

int main(void){
	int N, num, ans=0;
	scanf("%d", &N);
	
	for(int i=0; i<N; i++){
		scanf("%d", &num);
		if(find(num))
			ans++;
	}
	
	printf("%d", ans);
}
