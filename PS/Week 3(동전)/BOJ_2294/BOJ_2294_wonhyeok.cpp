#include <cstdio>
#include <algorithm>
#include <limits.h>
#include <iostream>

using namespace std;

int main(void){
	int n, k, coin[101], lut[10001];
	fill_n(lut, 10001, INT_MAX);
	lut[0] = 0;
	scanf("%d %d", &n, &k);
	
	for(int i=0; i<n; i++){
		scanf("%d", &coin[i]);
	}
	
	for(int i=1; i<=k; i++){
		for(int j=0; j<n; j++){
			if(i-coin[j]>=0 && lut[i-coin[j]]!=INT_MAX){
				lut[i] = min(lut[i], 1+lut[i-coin[j]]);
			}
		}
		//printf("%d ",lut[i]);
	}
	
	if(lut[k]!=INT_MAX)
		printf("%d", lut[k]);
	else
		printf("-1");
}
