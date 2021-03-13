#include <vector>
#include <cstdio>
#include <algorithm>

using namespace std;

bool chae[4000001];
vector <int> sosu;

void makechae(int N){
	for(int i=2; i<=N; i++){
		if(chae[i]){
			sosu.push_back(i);
			for(int j=i; j<=N; j+=i)
				chae[j] = false;
		}
	}
}

int main(void){
	int N, successcnt=0;
	scanf("%d", &N);
	
	fill(chae, chae+4000001*sizeof(bool), true);
	
	makechae(N);
	//for(int i=0; i<sosu.size(); i++)
	//	printf("%d ",sosu[i]);
	for(int i=0; i<sosu.size(); i++){
		int cnt=0, ans=0;
		while(ans<N && i+cnt<sosu.size()){
			ans += sosu[i+cnt];
			cnt++;
		}
		if(ans==N)
			successcnt++;
	}
	
	printf("%d", successcnt);
}
