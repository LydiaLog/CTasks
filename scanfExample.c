#define _CRT_SECURE_NO_WARNINGS

/* �ǽ� 7 : scanfExample.c
   �ۼ��� : 2022.03.11
   �ۼ��� : ������
   ���α׷� ���� : �ڷ����� ���� scanf ���������� ���
*/
#include <stdio.h>

int main()
{
	short s;
	long l;
	unsigned u;

	printf("Enter a short number : ");
	scanf("%hd", &s);
	printf("Enter a long number : ");
	scanf("%ld", &l);
	printf("Enter an unsigned number : ");
	scanf("%u", &u);

	printf("\n%hd %ld %u \n", s, l, u);
	return 0;
}