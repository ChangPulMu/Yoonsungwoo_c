#include <stdio.h>
int Highnum(int, int, int);
int Lownum(int, int, int);
int main(void){
	int a, b, c;
	printf("세 개의 수를 입력하시오 : ");
	scanf("%d %d %d", &a, &b, &c);
	printf("가장 큰 수 : %d\n", Highnum(a, b, c));
	printf("가장 작은 수 : %d\n", Lownum(a, b, c));
	return 0;
}
int Highnum(int n, int m, int l){
	if(n>=m){
		if(n>=l)
			return n;
		else
			return l;
	}
	else if(m>=l)
		return m;
	else
		return l;
}
/*
 * if(n>m)
 * 		return (n>l)?n:l;
 * else
 * 		return (m>l)?m:l;
 * 이렇게 쓰면 코드를 훨씬 단축할 수 있다.*/
int Lownum(int o, int p, int q){
	if(o<=p){
		if(o<=q)
			return o;
		else
			return q;
	}
	else if(p<=q)
		return p;
	else
		return q;
}
