#include <cstdio>
#include <cstring>

using namespace std;

int ans = 0;

void copy(bool board[][16], bool newboard[][16]){
	for(int i=0; i<16; i++){
		for(int j=0; j<16; j++){
			newboard[i][j] = board[i][j];
		}
	}
}
void putQ(int row, int col, bool board[][16], int N){
	int y=row, x=col;
	while(y<N && x<N){
		board[y][x] = true;
		x++, y++;
	}
	y=row, x=col;
	while(y<N && x>=0){
		board[y][x] = true;
		x--, y++;
	}
	y=row, x=col;
	while(y<N){
		board[y][x] = true;
		y++;
	}
}
void func(int N, int row, bool board[][16]){
	bool newboard[16][16];
	for(int col=0; col<N; col++){
		copy(board, newboard);	
		if(!board[row][col]){
			putQ(row, col, newboard, N);
			if(row==N-1)
				ans++;
			else
				func(N, row+1, newboard);
		}
	}	
}

int main(void){
	int N;
	bool board[16][16];
	
	memset(board, 0, 16*16*sizeof(bool));
	scanf("%d", &N);
	
	func(N, 0, board);
	
	printf("%d", ans);
}
