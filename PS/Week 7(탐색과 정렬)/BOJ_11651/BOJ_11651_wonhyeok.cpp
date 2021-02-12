#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(pair <int, int> a, pair <int, int> b){
	if(a.second==b.second)
		return a.first < b.first;
	return a.second < b.second;
}
int main(void){
	int N, x, y;
	vector <pair<int, int>> vec;
	scanf("%d", &N);
	
	for(int i=0; i<N; i++){
		scanf("%d %d", &x, &y);
		vec.push_back({x, y});
	}
	
	sort(vec.begin(), vec.end(), comp);

	for(int i=0; i<N; i++)
		printf("%d %d\n", vec[i].first, vec[i].second);
}
