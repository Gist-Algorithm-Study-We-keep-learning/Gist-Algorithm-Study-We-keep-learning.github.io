#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

bool visit1[1001];
bool visit2[1001];

void dfs(vector <int> graph[], int V){
	visit1[V] = true;
	printf("%d ", V);
	for(int i=0; i<graph[V].size(); i++){
		if(!visit1[graph[V][i]])
			dfs(graph, graph[V][i]);
	}
}

void bfs(vector <int> graph[], int V){
	queue <int> q;
	q.push(V);
	visit2[V] = true;
	while(!q.empty()){
		int front = q.front();
		printf("%d ",front);
		q.pop();
		for(int i=0; i<graph[front].size(); i++){
			if(!visit2[graph[front][i]]){
				q.push(graph[front][i]);
				visit2[graph[front][i]] = true;
			}
		}
	}
}

int main(void){
	int N, M, V, p1, p2;
	vector <int> graph[1001];
	
	scanf("%d %d %d", &N, &M, &V);
	
	for(int i=0; i<M; i++){
		scanf("%d %d", &p1, &p2);
		graph[p1].push_back(p2);
		graph[p2].push_back(p1);
	}
	
	for(int i=1; i<=N; i++)
		sort(graph[i].begin(), graph[i].end());
		
	dfs(graph, V);
	printf("\n");
	bfs(graph, V);
}
