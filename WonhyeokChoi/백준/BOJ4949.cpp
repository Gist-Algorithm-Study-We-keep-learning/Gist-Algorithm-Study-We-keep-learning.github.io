#include <cstdio>
#include <cstring>
#include <iostream>
#include <stack>
#include <stdio.h>
using namespace std;
int main(void){
	char s[102];
	while(1){
		stack <char> stk;
		bool balance = true;
		fgets(s, sizeof s, stdin);
		if(strcmp(s, ".\n")==0)
			break;
		for(int i=0; i<strlen(s); i++){
			if(s[i]=='[' || s[i]=='(')
				stk.push(s[i]);
			else if(s[i]==']'){
				if(stk.empty())
					balance = false;
				else{
					if(stk.top()=='[')
						stk.pop();
					else
						balance = false;
				}
			}
			else if(s[i]==')'){
				if(stk.empty())
					balance = false;
				else{
					if(stk.top()=='(')
						stk.pop();
					else
						balance = false;
				}
			}
		}
		if(!stk.empty())
			balance = false;	
		if(balance)
			printf("yes\n");
		else
			printf("no\n");
	}
}
