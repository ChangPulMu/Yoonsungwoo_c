#include <stdio.h>
int main(void){
	char gt[]={'G','o','o','d',' ','t','i','m','e'}; //콤마를 꼭 붙여야 함!
	for(int i=0;i<9;i++) //이것보단 int a = sizeof(gt)/sizeof(char);해서 9자리에 a를 넣어야함!
		printf("%c", gt[i]);
	return 0;
}
