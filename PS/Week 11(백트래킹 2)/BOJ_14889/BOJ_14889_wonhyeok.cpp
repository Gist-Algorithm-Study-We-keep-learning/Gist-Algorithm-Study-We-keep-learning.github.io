#include <cstdio>
#include <algorithm>
#include <limits.h>
#include <vector>

using namespace std;

int absfunc(int a, int b){
	if(a>b)
		return a-b;
	return b-a;
}

int ans = INT_MAX;
int N;
int S[21][21];

void func(int ncnt, vector <int> t1, vector <int> t2){
	if(ncnt==N){
		int s1=0, s2=0;
		for(int i=0; i<t1.size(); i++){
			for(int j=0; j<t1.size(); j++){
				s1 += S[t1[i]][t1[j]];
			}
		}
		for(int i=0; i<t2.size(); i++){
			for(int j=0; j<t2.size(); j++){
				s2 += S[t2[i]][t2[j]];
			}
		}	
		//printf(" score : %d %d", s1, s2);
		//printf("\n");
		ans = min(ans, absfunc(s1, s2));
	}
	else{
		if(t1.size()==(N/2)){
			t2.push_back(ncnt);
			func(ncnt+1, t1, t2);
		}
		else if(t2.size()==(N/2)){
			t1.push_back(ncnt);
			func(ncnt+1, t1, t2);
		}
		else{
			t1.push_back(ncnt);
			func(ncnt+1, t1, t2);
			t1.pop_back();
			
			t2.push_back(ncnt);
			func(ncnt+1, t1, t2);
			t2.pop_back();
		}
	}
}
int main(void){
	scanf("%d", &N);
	
	
	vector <int> team1;
	vector <int> team2;
	
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			scanf(" %d", &S[i][j]);
		}
	}
	
	func(0, team1, team2);
	printf("%d", ans);
}
