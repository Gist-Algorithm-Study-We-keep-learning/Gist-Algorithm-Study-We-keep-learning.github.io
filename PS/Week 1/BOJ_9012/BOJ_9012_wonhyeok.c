#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main(void){
	int T;
	cin >> T;
	string::iterator it;
	for(int i=0; i<T; i++){
		bool able = true;
		stack <int> stk;
		string str;
		cin >> str;
		for(it = str.begin(); it<str.end(); it++){
			if((*it)=='('){
				stk.push(1);
			}
			else{
				if(stk.empty()){
					stk.push(1);
				}
				else
					stk.pop();
			}
		}
	if(able && stk.empty())
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	}
}
