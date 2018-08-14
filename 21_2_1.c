#include <stdio.h>
#include <string.h>

int main(void){
	char s[20];
	int sum=0;

	printf("문자열을 입력하시오 : ");

	gets(s); //fgets(s, sizeof(s), stdin); 이 좀더 좋은 코드!

	for(int i=0;i<strlen(s);i++)
		if(s[i]>=48&&s[i]<=57)
			sum += s[i]-48;

	printf("%d",sum);

	return 0;
}
