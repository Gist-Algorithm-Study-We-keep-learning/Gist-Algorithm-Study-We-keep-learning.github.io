#include <cstdio>
#include <algorithm>

using namespace std;

void find(int Num[], int n, int N){
	int left = 0, right = N-1, mid = (left+right)/2; 
	bool exist = false;
	while(left<=right){
		mid = (left+right)/2;
		if(Num[mid] == n){
			printf("1\n");
			exist = true;
			break;
		}
		else if(Num[mid] > n)
			right = mid - 1;
		else
			left = mid + 1;
	}
	if(!exist)
		printf("0\n");
}
int main(void){
	int N, Num[100001], M, x;
	
	scanf("%d", &N);
	
	for(int i=0; i<N; i++){
		scanf("%d", &Num[i]);
	}

	sort(Num, Num+N);
	
	scanf("%d", &M);
	for(int i=0; i<M; i++){
		scanf("%d", &x);
		find(Num, x, N);
	}	
}
