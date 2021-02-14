#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int main(void){
	int N, n;
	vector <int> vec;
	
	scanf("%d", &N);

	for(int i=0; i<N; i++){
		scanf("%d", &n);
		vec.push_back(n);
	}
	
	sort(vec.begin(), vec.end());
	vec.erase(unique(vec.begin(), vec.end()), vec.end());

	for(int i=0; i<vec.size(); i++)
		printf("%d ",vec[i]);
}
