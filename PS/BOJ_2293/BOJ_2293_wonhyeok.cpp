#include <cstdio>
#include <algorithm>

using namespace std;

int main(void){
	int n, k, coin[101], lut[10001]={};
	
	scanf("%d %d", &n, &k);
	
	for(int i=0; i<n; i++)
		scanf("%d", &coin[i]);
	sort(coin, coin + n);
	
	for(int i=0; i<n; i++){
		for(int j=0; j<=k; j++){
			if(i==0){
				if(j==0 || j%coin[0]==0){
					lut[j] = 1; 
				}
			}
			else{
				if(j-coin[i]>=0){
					lut[j] = lut[j-coin[i]]+lut[j];
				}
			}
		}
	}
	
	printf("%d", lut[k]);
}
