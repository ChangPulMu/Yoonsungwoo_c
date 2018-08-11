#include <stdio.h>
//#include <stdlib.h>
void Heomun(char *, int);

int main(void){
	int mnm;
	char str[50];
	//char * str = malloc(sizeof(char)*50); char 포인터형은 문자열 입력받으려면 동적 메모리 할당해야함!

	printf("문자열 입력 : ");
	scanf("%s", str);

	for(mnm=0;str[mnm]!='\0';mnm++){}

	Heomun(str,mnm);

	return 0;
}

void Heomun(char * st, int n){
	int t=0;

	for(int i=n/2;i>0;i--){
		if(st[t]!=st[n-1]){
			printf("회문이 아닙니다. \n");
			return;
		}
		t++;
		n -= 1;
	}

	printf("회문 입니다. \n");
}
