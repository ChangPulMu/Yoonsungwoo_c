#include <stdio.h>
typedef struct point{
	int xpos;
	int ypos;
} Point;

void Swap(Point *,Point *);

int main(void){
	Point pos1={2,4};
	Point pos2={5,7};

	Swap(&pos1,&pos2);

	printf("%d %d\n",pos1.xpos,pos1.ypos);
	printf("%d %d\n",pos2.xpos,pos2.ypos);

	return 0;
}

void Swap(Point * p1, Point * p2){
	int tmp;

	tmp = p1->xpos;
	p1->xpos = p2->xpos;
	p2->xpos = tmp;

	tmp = p1->ypos;
	p1->ypos = p2->ypos;
	p2->ypos = tmp;
	/*
	 * Point tmp;
	 * *tmp = *p1;
	 * *p1 = *p2;
	 * *p2 = tmp;
	 * 이렇게 쓰면 더 효율적입니다...*/
}
