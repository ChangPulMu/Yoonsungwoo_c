#include <stdio.h>

int main(void){
	int ch;

	printf("알파벳을 입력하시오 : ");

	ch = getchar();

	if((ch>=65&&ch<=90)||(ch>=97&&ch<=122)){ //대소문자 변경 : 이라는 출력을 안쓸것이면 구지 쓸필요없음
		printf("대소문자 변경 : ");
		
		if(ch>=65&&ch<=90)
			putchar(ch+32);
		else
			putchar(ch-32);
	}
	else
		printf("알파벳이 아닙니다.");

	return 0;
}
