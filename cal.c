#define _CRT_SECURE_NO_WARNINGS

/* 3���� �ǽ� 2�� : cal.c
   �ۼ��� : 2022. 03. 16
   �ۼ��� : ������
   ���α׷� ���� : ������ ���� �����ϰ� ������ ����ϴ� ���α׷�
*/

#include <stdio.h>

int main(int argc, char* argv[])
{
	int x = 2;
	int y = 3;
	double z = 2.4;
	double result = 0.0;

	/*
	a)
	result = x++ + y++ + z;
	printf("x�� %d, y�� %d, z�� %4.1f �� �� ���� x++ + y++ + z�� ��� %4.1f", x, y, z, result);
	
	b)
	result = ++x + y / 2 * 2 - (int)z;
	printf("x�� % d, y�� % d, z�� %4.1f �� �� ���� ++x + y / 2 * 2 - (int)z �� ��� %4.1f", x, y, z, result);
	
	c)
	result = (int)z - (x + (int)z) % 2 + 4.0;
	printf("x�� % d, y�� % d, z�� %4.1f �� �� ���� (int)z - ( x + (int)z ) % 2 + 4.0 �� ��� %4.1f", x, y, z, result);
	
	*/

	result = x * 6 - 2 * (3 + z) + y;
	printf("x�� %d, y�� %d, z�� %4.1f �� �� ���� x * 6 - 2 * (3 + z) + y�� ��� %4.1f", x, y, z, result);

	
	return 0;
}