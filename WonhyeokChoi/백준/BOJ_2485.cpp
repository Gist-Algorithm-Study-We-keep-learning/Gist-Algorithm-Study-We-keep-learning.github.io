#include <cstdio>
#include <algorithm>

using namespace std;

int gcd(int a, int b){
	if(b==0)
		return a;
	else
		return gcd(b, a%b);
}

int main(void){
	int N, tree[100001], Gcd;
	scanf("%d", &N);
	
	for(int i=0; i<N; i++){
		scanf("%d", &tree[i]);
	}
	
	sort(tree, tree+N);
	
	for(int j=1; j<N; j++){
		tree[j] -= tree[0];
	}
	
	tree[0] = 0;
	Gcd = tree[1];
	
	for(int i=1; i<N; i++){
		Gcd = gcd(Gcd, tree[i]);
	}
	printf("%d", tree[N-1]/Gcd - N + 1);
}
