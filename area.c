#define _CRT_SECURE_NO_WARNINGS

/* 3���� �ǽ� 5�� : area.c
   �ۼ��� : 2022. 03. 16
   �ۼ��� : ������
   ���α׷� ���� : ������ ������ ���� �����ͷ� ����ϴ� ���α׷�

*/

#include <stdio.h>

int main(int argc, char* argv[])
{
	int p;
	double area;

	printf("���� �Է��ϼ��� : ");
	scanf("%d", &p);

	area = 3.3 * p;
	printf("%d ���� �����ͷ� �ٲ� �� : %2.1lf ", p, area);

	return 0;
}