#define _CRT_SECURE_NO_WARNINGS

/* 4���� �ǽ� 6�� : fac.c
   �ۼ��� : 2022. 03. 23
   �ۼ��� : ������
   ���α׷� ���� : ��� ȣ���� �̿��� ���丮���� ����ϴ� ���α׷�
*/

#include <stdio.h>

long long factorial(int n);

int main(void) {

	int num = 0;
	long long fact;

	printf("����� ���丮���� ũ�⸦ �Է��ϼ��� : ");
	scanf("%d", &num);

	fact = factorial(num);

	printf("1���� %d������ ���丮���� �� : %lld", num, fact);

	return 0;

}

long long factorial(int n) {

	if (n == 1)
		return 1;
	else
		return n * factorial(n - 1);

}