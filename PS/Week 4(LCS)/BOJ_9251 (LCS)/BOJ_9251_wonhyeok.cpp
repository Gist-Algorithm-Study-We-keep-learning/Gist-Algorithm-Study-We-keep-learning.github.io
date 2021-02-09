#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

int lut[1002][1002]={};

int main(void){
	char s1[1001], s2[1001];
	vector <char> answer;
	scanf("%s %s", s1, s2);
	
	fill(&lut[0][0], &lut[1001][1002], 0);
	
	int len1=strlen(s1), len2=strlen(s2);
	for(int i=1; i<=len1; i++){
		for(int j=1; j<=len2; j++){
			if(s1[i-1]==s2[j-1]){
				lut[i][j] = lut[i-1][j-1] + 1;
			}
			else{
				lut[i][j] = max(lut[i-1][j], lut[i][j-1]);
			}
		}
	}
	
	printf("%d\n",lut[len1][len2]);
}
