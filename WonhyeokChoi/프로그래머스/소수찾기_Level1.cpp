#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
bool special[1000000];
int solution(int n) {
    int answer = 0;
    fill(special, special+n+1, false);
    for(int i=2; i<=n; i++){
        if(!special[i]){
            answer++;
            for(int j=i; j<=n; j+=i){
                if(!special[j])
                    special[j] = true;
            }
        }
    }
    return answer;
}
