#include<stdio.h>

int main(void) {

	int a, b, c;
	printf("�� ������ �Է��ϼ���:");
	scanf_s("%d %d %d", &a, &b, &c );

	if (a > b && a > c) {
		if (b > c)
			printf("���� ū ���� a=%d �߰����� b=%d ���� ���� ����c=%d",a,b,c);
		else
			printf("���� ū ���� a=%d �߰����� c=%d ���� ���� ���� b=%d",a,c,b);
	}
	if (c > a && c > b) {
		if (a > b)
			printf("���� ū ���� c=%d �߰� ���� a=%d ���� ���� ���� b=%d",c,a,b);
		else
			printf("���� ū ���� c=%d �߰� ���� b=%d ���� ���� ���� a=%d",c,b,a);
	}
	if (b > a && b > c) {
		if (a > c)
			printf("���� ū ���� b=%d �߰� ���� a=%d ���� ���� ���� c=%d",b,a,c);
		else
			printf("���� ū ���� b=%d �߰� ���� c=%d ���� ���� ���� a=%d",b,c,a);
	}

	return 0;
}

//ù��°�� ū if���� ���� ���� ū ���� ���ϰ� �� �ȿ��� ��ø if���� �Ἥ �ι�° ���� ���ϰ� �װ��� �ƴҰ��� ����ؼ� else���� ����
//  6���� ����� ���� �������Ѵ�