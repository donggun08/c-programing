#include<stdio.h>

int main(void) {

	int a, b, c;
	printf("세 정수를 입력하세요:");
	scanf_s("%d %d %d", &a, &b, &c );

	if (a > b && a > c) {
		if (b > c)
			printf("제일 큰 값은 a=%d 중간값은 b=%d 제일 작은 값은c=%d",a,b,c);
		else
			printf("제일 큰 값은 a=%d 중간값은 c=%d 제일 작은 값은 b=%d",a,c,b);
	}
	if (c > a && c > b) {
		if (a > b)
			printf("제일 큰 값은 c=%d 중간 값은 a=%d 제일 작은 값은 b=%d",c,a,b);
		else
			printf("제일 큰 값은 c=%d 중간 값은 b=%d 제일 작은 값은 a=%d",c,b,a);
	}
	if (b > a && b > c) {
		if (a > c)
			printf("제일 큰 값은 b=%d 중간 값은 a=%d 제일 작은 값은 c=%d",b,a,c);
		else
			printf("제일 큰 값은 b=%d 중간 값은 c=%d 제일 작은 값은 a=%d",b,c,a);
	}

	return 0;
}

//첫번째로 큰 if문을 만들어서 가장 큰 값을 정하고 그 안에서 중첩 if문을 써서 두번째 값을 구하고 그것이 아닐것을 대비해서 else문을 만들어서
//  6가지 경우의 수를 만들어야한다