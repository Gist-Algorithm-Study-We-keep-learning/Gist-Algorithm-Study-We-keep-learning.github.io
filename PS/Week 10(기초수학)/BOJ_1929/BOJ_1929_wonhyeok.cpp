#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

int main(void){
	int M, N;
	
	scanf("%d %d", &M, &N);
	
	bool board[N+1];
	
	fill(board, board+N+1, true);
	
	for(int i=2; i<=N; i++){
		if(board[i]){
			if(i>=M)
				printf("%d\n", i);
			for(int j=i*2; j<=N; j+=i){
				if(board[j])
					board[j] = false;
			}
		}
	}
}
