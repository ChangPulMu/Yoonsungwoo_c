#include <stdio.h>
void func2(int);
void func1(int);

int main(void){
	int num1 = 20;

	func1(num1);

	return 0;
}

void func2(int n){
	int num3 = n+1;
}

void func1(int n){
	int num2 = n+1;
	
	func2(num2);
}
