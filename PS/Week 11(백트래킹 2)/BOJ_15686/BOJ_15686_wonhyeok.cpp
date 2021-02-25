#include <cstdio>
#include <vector>
#include <limits.h>
#include <algorithm>

using namespace std;

int N, M, S[51][51], ans=INT_MAX;
vector <pair<int, int>> home; 
vector <pair<int, int>> chick;
int distance(pair <int, int> a, pair <int, int> b){
	int dis = 0;
	if(a.first > b.first)
		dis += (a.first - b.first);
	else
		dis += (b.first - a.first);
		
	if(a.second > b.second)
		dis += (a.second - b.second);
	else
		dis += (b.second - a.second);
	
	return dis;
}
void func(int cnt, int chickcnt, vector <pair<int, int>> survive){
	if(cnt==M){
		int d=0;
		for(int i=0; i<home.size(); i++){
			int dis = INT_MAX;
			for(int j=0; j<survive.size(); j++){
				dis = min(dis, distance(home[i], survive[j]));
			}
			d += dis;
		}
		ans = min(ans, d);
	}
	else if(chickcnt < chick.size()){
		func(cnt, chickcnt+1, survive);
		survive.push_back({chick[chickcnt].first, chick[chickcnt].second});
		func(cnt+1, chickcnt+1, survive);
	}
}
int main(void){
	vector <pair<int, int>> survive;
	
	scanf("%d %d", &N, &M);
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			scanf("%d", &S[i][j]);
			if(S[i][j]==1)
				home.push_back({i, j});
			if(S[i][j]==2)
				chick.push_back({i, j});
		}
	}
	
	func(0, 0, survive);
	
	printf("%d", ans);
}
