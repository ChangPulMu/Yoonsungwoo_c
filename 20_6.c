#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	int com[3], me[3], a=1, str=0, ball=0;

	srand((int)time(NULL));
	
	for(int i=0;i<3;i++)
		com[i]=rand()%10;

	printf("Start Game!\n");

	while(1){
		printf("3개의 숫자 선택 (%d번째) : ",a);
		
		for(int i=0;i<3;i++)
			scanf("%d",&(me[i]));

		for(int i=0;i<3;i++){
			if(com[i]==me[i])
				str++;
			
			for(int j=0;j<3;j++){
				if(com[i]==me[j])
					ball++;
			}
		}

		ball -= str;

		printf("%d번째 도전 결과 : %dstrike, %dball!\n",a,str,ball);

		if(str==3)
			break;

		str=0, ball=0;
		a++;
	}

	printf("Game Over!");

	return 0;
}
