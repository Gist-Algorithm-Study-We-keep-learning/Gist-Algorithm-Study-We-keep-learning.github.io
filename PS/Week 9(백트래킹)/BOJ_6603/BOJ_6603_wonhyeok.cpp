#include <cstdio>
#include <vector>

using namespace std;

void func(int cnt, int num[], int N, int now, vector <int> v){
	if(cnt==6){
		for(int i=0; i<v.size(); i++)
			printf("%d ",v[i]);
		printf("\n");
	}
	else if(now!=N){
		v.push_back(num[now]);
		func(cnt+1, num, N, now+1, v);
		v.pop_back();
		func(cnt, num, N, now+1, v);
	}
}

int main(void){
	int n, num[14];
	vector <int> v;
	
	while(1){
		scanf("%d", &n);
		if(n==0)
			break;
		else{
			for(int i=0; i<n; i++)
				scanf("%d", &num[i]);
			func(0, num, n, 0, v);
			printf("\n");
		}
	}
}
