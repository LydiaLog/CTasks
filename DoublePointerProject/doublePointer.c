#define _CRT_SECURE_NO_WARNINGS

/* 10���� �ǽ� 5�� : doublePointer.c
   �ۼ��� : 2022. 05. 04
   �ۼ��� : ������
   ���α׷� ���� : ��������(����),��������(������),���߰�������(����������)�� ���� ����Ͽ� Ű����κ��� ������ �Է¹ް� ����ϴ� ���α׷�
*/

#include <stdio.h>

int main()
{
	int value; //����ڷκ��� �Է¹��� ����
	int *p = &value;
	int **q = &p;

	printf("value�� ���� �Է��ϼ��� : ");
	scanf("%d", &value);

	printf("value�� �ּ� : %d \n", &value);
	printf("p�� �ּ� : %d \n",&p);
	printf("q�� �ּ� : %d \n",&q);

	printf("value = %d \n", value);// ��������
	printf("p = %d\n", *p); // ��������
	printf("q = %d \n", **q); // ���߰�������

	return 0;
}