#include<stdio.h>

int main(void) {

	int num1, num2, num3, answer;

	printf("세 개의 정수를 입력하시오");
	scanf_s("%d %d %d",&num1, &num2, &num3 );

	if (num1 > num2 && num2 > num3) {
		printf("%d %d %d", num1, num2, num3);
	}
	if (num2 > num3 && num3 > num1) {
		printf("%d %d %d", num2, num3, num1);
	}
	if (num3 > num2 && num2 > num1) {
		printf("%d %d %d", num1, num2, num3);
	}
	
	return 0;
}