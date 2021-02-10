#include <algorithm>
#include <cstdio>

using namespace std;

int main(void){
	int N, arr[1001]={}, lut[1001]={}, maxi=-1;
	
	scanf("%d", &N);
	
	for(int i=0; i<N; i++){
		scanf("%d", &arr[i]);
		lut[i] = arr[i];
		for(int j=0; j<i; j++){
			if(arr[j] < arr[i]){
				lut[i] = max(lut[i], lut[j] + arr[i]);
			}
		}
		
		maxi = max(maxi, lut[i]);
	}
	printf("%d", maxi);
}
