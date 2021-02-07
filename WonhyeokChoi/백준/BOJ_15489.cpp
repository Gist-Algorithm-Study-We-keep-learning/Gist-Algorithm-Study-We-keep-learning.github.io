#include <cstdio>
#include <algorithm>

using namespace std;

int main(void){
	int R, C, W;
	long long int lut[31][31], ans=0;
	
	scanf("%d %d %d", &R, &C, &W);
	W -= 1;
	for(int i=1; i<=30; i++){
		for(int j=1; j<=i; j++){
			if(i==j || j==1)
				lut[i][j] = 1;
			else{
				lut[i][j] = lut[i-1][j] + lut[i-1][j-1];
			}
			//printf("%lld ",lut[i][j]);
		}	
		//printf("\n");
	}
	
	for(int i=R; i<=R+W; i++){
		for(int j=C; j<=C+i-R; j++){
			ans += lut[i][j];
			//printf("%d ",lut[i][j]);
		}
	}
	
	printf("%lld", ans);
}
