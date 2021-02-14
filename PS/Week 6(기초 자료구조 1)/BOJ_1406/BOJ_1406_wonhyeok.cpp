#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;
bool comp(char a[], char b[]){
	if(strlen(a)==strlen(b))
		return a<b;
	else
		return strlen(a) < strlen(b);
}
int main(void){
	char word[20001][51];
	int N;
	
	scanf("%d", &N);
	
	for(int i=0; i<N; i++)
		scanf("%s", word[i]);
	
	sort(word, word+N, comp);
	
	for(int i=0; i<N; i++)
		printf("%s\n", word[i]);
}
