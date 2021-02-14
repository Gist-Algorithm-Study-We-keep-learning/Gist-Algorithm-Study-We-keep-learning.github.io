#include <cstdio>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(int a, int b){
	return a>b;
}
int main(void){
	int T, N, M, file;
	scanf("%d", &T);
	
	for(int i=0; i<T; i++){
		scanf("%d %d", &N, &M);
		vector <int> import;
		int importcnt=0, ans = 1;;
		queue <pair<int, bool>> q;
		for(int j=0; j<N; j++){
			scanf("%d", &file);
			if(j==M)
				q.push({file, true});
			else
				q.push({file, false});
			import.push_back(file);
		}
		
		sort(import.begin(), import.end(), comp);
		
		while(1){
			if(q.front().first == import[importcnt]){
				if(q.front().second == true){
					printf("%d\n", ans);
					break;
				}
				else{
					q.pop();
					ans++;
					importcnt++;
				}
			}
			else{
				pair <int, bool> tmp = q.front();
				q.pop();
				q.push(tmp);
			}
		}
	}
}
