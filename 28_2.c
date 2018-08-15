#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct{
	char writer[20];
	char book_name[20];
	int page;
}Book;

int main(void){
	Book * b[3];

	for(int i=0;i<3;i++)
		b[i] = (Book *)calloc(sizeof(Book),1);

	printf("도서 정보 입력\n");

	for(int i=0;i<3;i++){
		printf("저자 : ");
		fgets(b[i]->writer,20,stdin);
		b[i]->writer[strlen(b[i]->writer)-1]=0;
		
		printf("제목 : ");
		fgets(b[i]->book_name,20,stdin);
		b[i]->book_name[strlen(b[i]->book_name)-1]=0;
		
		printf("페이지 수 : ");
		scanf("%d",&(b[i]->page));
		getchar();
	}

	printf("\n도서 정보 출력\n");
	
	for(int i=0;i<3;i++){
		printf("book %d\n",i+1);
		printf("저자 : %s\n", b[i]->writer);
		printf("제목 : %s\n", b[i]->book_name);
		printf("페이지 수 : %d\n",b[i]->page);
	}

	for(int i=0;i<3;i++)
		free(b[i]);

	return 0;
}
