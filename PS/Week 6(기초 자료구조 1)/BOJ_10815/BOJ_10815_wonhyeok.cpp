#include <cstdio>
#include <algorithm>

using namespace std;
bool find(int card[], int N, int x){
	int left = 0, right = N-1, mid;
	while(left<=right){
		mid = (left+right)/2;
		if(card[mid]==x){
			return true;
		}
		else if(card[mid] < x){
			left = mid + 1;
		}
		else
			right = mid -1;
	}
	return false;
}
int main(void){
	int N, M, card[500001], x;
	scanf("%d", &N);
	
	for(int i=0; i<N; i++){
		scanf("%d", &card[i]);
	}
	sort(card, card+N);
	
	scanf("%d", &M);
	
	for(int i=0; i<M; i++){
		scanf("%d", &x);
		if(find(card, N, x))
			printf("1 ");
		else
			printf("0 ");
	}
}
