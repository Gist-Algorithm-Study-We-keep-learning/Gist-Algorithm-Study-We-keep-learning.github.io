#include <cstdio>
#include <algorithm>

using namespace std;

int main(void){
	int N, M, card[500001], input;
	scanf("%d", &N);
	
	for(int i=0; i<N; i++){
		scanf("%d", &card[i]);
	}
	sort(card, card+N);
	scanf("%d", &M);
	
	for(int i=0; i<M; i++){
		scanf("%d", &input);
		printf("%d ", upper_bound(card, card+N, input)-lower_bound(card, card+N, input));
	}
		
}
