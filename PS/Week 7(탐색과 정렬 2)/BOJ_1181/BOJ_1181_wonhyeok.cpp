#include <cstdio>
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
bool comp(string a, string b){
	if(a.size() == b.size())
		return a<b;
	return a.size() < b.size();
}
int main(void){
	int N;
	vector <string> v;
	string str;
	scanf("%d\n", &N);
	
	for(int i=0; i<N; i++){
		getline(cin, str);
		v.push_back(str);
	}
	sort(v.begin(), v.end(), comp);
	v.erase(unique(v.begin(), v.end()), v.end());
	int size = v.size();
	for(int i=0; i<size; i++){
		cout << v[i] << endl;
	}
}
