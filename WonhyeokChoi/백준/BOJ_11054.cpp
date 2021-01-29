#include <cstdio>
#include <algorithm>

using namespace std;

int main(void){
	int N, arr[1001], b1[1001]={}, b2[1001]={}, ans=-1;
	fill(b1, b1+1001, 1);
	fill(b2, b2+1001, 1);

	scanf("%d", &N);

	for(int i=0; i<N; i++){
		scanf("%d", &arr[i]);
	}
	
	for(int i=0; i<N; i++){
		for(int j=0; j<i; j++){
			if(arr[j] < arr[i])
				b1[i] = max(b1[i], 1+b1[j]);
		}
	}
	for(int i=N-1; i>=0; i--){
		for(int j=N-1; j>i; j--){
			if(arr[j] < arr[i])
				b2[i] = max(b2[i], 1+b2[j]);
		}
	}
	
	for(int i=0; i<N; i++)
		ans = max(ans, b1[i]+b2[i]);
		
	printf("%d", ans-1);
}
