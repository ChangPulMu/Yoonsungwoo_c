#include <stdio.h>
typedef struct{
	int xpos;
	int ypos;
} Point;

typedef struct{
	Point p1;
	Point p2;
} Rectangle;

void Width(Rectangle *);
void Pit(Rectangle *);

int main(void){
	Rectangle r;

	printf("두 점의 x, y좌표를 순서대로 입력해주시오 : ");
	scanf("%d %d %d %d",&r.p1.xpos,&r.p1.ypos,&r.p2.xpos,&r.p2.ypos);

	Width(&r);
	Pit(&r);

	return 0;
}

void Width(Rectangle * rr){
	int m, n;

	if(((rr->p1).xpos-(rr->p2).xpos)<0)
		m = (rr->p2).xpos-(rr->p1).xpos;
	else
		m = (rr->p1).xpos-(rr->p2).xpos;
	
	if(((rr->p1).ypos-(rr->p2).ypos)<0)
		n = (rr->p2).ypos-(rr->p1).ypos;
	else
		n = (rr->p1).ypos-(rr->p2).ypos;

	printf("넓이 : %d\n",m*n);
}

void Pit(Rectangle * R){
	printf("[ %d , %d ]\n",(R->p1).xpos,(R->p1).ypos);
	printf("[ %d , %d ]\n",(R->p2).xpos,(R->p2).ypos);
	printf("[ %d , %d ]\n",(R->p1).xpos,(R->p2).ypos);
	printf("[ %d , %d ]\n",(R->p2).xpos,(R->p1).ypos);
}
