#include <cstdio>
#include <stack>
#include <queue>

using namespace std;

int main(void){
	int n, arr[100001], cnt=0;
	bool able = true;
	stack <int> stk;
	queue <char> ans;
	queue <int> num;
	
	scanf("%d", &n);
	
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
		num.push(i+1);
	}
	
	while(cnt<n){
		while((num.front() <= arr[cnt]) && !num.empty()){
			stk.push(num.front());
			ans.push('+');
			num.pop();
		}
		if(!stk.empty() && stk.top()==arr[cnt]){
			stk.pop();
			ans.push('-');	
		}
		if(!stk.empty() && stk.top() > arr[cnt]){
			able = false;
			break;
		}
		cnt++;
	}
	
	if(able){
		while(!ans.empty()){
			printf("%c\n",ans.front());
			ans.pop();
		}
	}
	else{
		printf("NO");
	}
}
