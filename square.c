#define _CRT_SECURE_NO_WARNINGS

/* 3���� �ǽ� 1�� : square.c
   �ۼ��� : 2022. 03. 16
   �ۼ��� : ������
   ���α׷� ���� : �� ������ �Է¹޾� �簢���� ���̸� ����ϴ� ���α׷�
*/

#include <stdio.h>

int main(int argc, char* argv[])
{
	int a, b, area;

	printf("���� ������ ���̸� ���� �Է��ϼ��� : ");
	scanf("%d%d", &a, &b);
	area = a * b;
	printf("���� : %d", area);

	
	return 0;
}