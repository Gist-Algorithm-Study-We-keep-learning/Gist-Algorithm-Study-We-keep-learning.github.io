#include <cstdio>
#include <algorithm>

using namespace std;

int main(void){
	int N, T[16], P[16], lut[16]={}, maxi = -1;
	
	scanf("%d", &N);
	for(int i=1; i<=N; i++){
		scanf("%d %d", &T[i], &P[i]);
	}
	
	for(int i=1; i<=N; i++){
		if(i+T[i]>N+1)
			lut[i] = 0;
		else{
			lut[i] += P[i];
			for(int j=i-1; j>0; j--){
				if(T[j]+j <= i)
					lut[i] = max(lut[i], lut[j] + P[i]);
			}
		}
		maxi = max(maxi, lut[i]);
		//printf("%d\n", lut[i]);
	}
	
	printf("%d", maxi);
}
