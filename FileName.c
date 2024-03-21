#include <stdio.h>

int main(void) {


	int answer = 0;
	
	for (int i = 0; i <= 1000; i++)
		answer += i;

	printf("1부터 1000까지 총 숫자의 합은 %d 입니다", answer);






	return 0;
}