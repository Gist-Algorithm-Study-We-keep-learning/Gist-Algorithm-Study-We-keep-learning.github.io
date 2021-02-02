#include <cstdio>

int main(void){
	int n;
	long long lut[117]={};
	lut[1] = 1;
	lut[2] = 1;
	lut[3] = 1;
	
	scanf("%d", &n);
	
	for(int i=4; i<=n; i++){
		lut[i] = lut[i-1] + lut[i-3];
	}
	
	printf("%lld", lut[n]);
}
