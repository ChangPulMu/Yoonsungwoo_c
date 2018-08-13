#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	int n, c, win=0, draw=0;

	printf("가위바위보 게임에 오신 걸 환영합니다!\n");
	
	while(1){
		printf("바위는 1 가위는 2 보는 3 : ");
		scanf("%d", &n);

		srand((int)time(NULL));
		c = rand()%3+1;

		if(n==1){
			printf("당신은 바위 선택, ");
			
			if(c==1){
				printf("컴퓨터는 바위 선택, 비겼습니다!\n");
				draw++;
			}
			
			else if(c==2){
				printf("컴퓨터는 가위 선택, 당신이 이겼습니다!\n");
				win++;
			}

			else if(c==3){
				printf("컴퓨터는 보 선택, 당신이 졌습니다!\n");
				break;
			}
		}

		if(n==2){
			printf("당신은 가위 선택, ");
			
			if(c==1){
				printf("컴퓨터는 바위 선택, 당신이 졌습니다!\n");
				break;
			}
			
			else if(c==2){
				printf("컴퓨터는 가위 선택, 비겼습니다!\n");
				draw++;
			}

			else if(c==3){
				printf("컴퓨터는 보 선택, 당신이 이졌습니다!\n");
				win++;
			}
		}

		if(n==3){
			printf("당신은 보 선택, ");
			
			if(c==1){
				printf("컴퓨터는 바위 선택, 당신이 이겼습니다!\n");
				win++;
			}
			
			else if(c==2){
				printf("컴퓨터는 가위 선택, 당신이 졌습니다!\n");
				break;
			}

			else if(c==3){
				printf("컴퓨터는 보 선택, 비졌습니다!\n");
				draw++;
			}
		}
	}

	printf("게임의 결과 : %d승, %d무",win,draw);
}
