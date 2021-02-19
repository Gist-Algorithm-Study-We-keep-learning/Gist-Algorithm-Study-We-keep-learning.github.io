#include <cstdio>

int Gcd(int a, int b){
	int r = a%b;
	if(r==0)
		return b;
	else
		return Gcd(b, r);
}

int main(void){
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n%d", Gcd(a,b), a*b/Gcd(a, b));
}
