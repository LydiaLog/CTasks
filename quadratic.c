#define _CRT_SECURE_NO_WARNINGS

/* 3���� �ǽ� 6�� : quadratic.c
   �ۼ��� : 2022. 03. 22
   �ۼ��� : ������
   ���α׷� ���� : 2�� �������� ����� �Ǽ� a, b, c�� �Է¹޾�
				   2�� �������� ���� ����Ͽ� ����ϴ� ���α׷�
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[])
{
	int a, b, c;
	float x1 = 0.0 ,x2 = 0.0;

	a = b = c = 0.0;

	printf("���� �������� ��� �� ���� �Ǽ� ���·� �Է��ϼ��� : ");
	scanf("%f%f%f", &a, &b, &c);

	x1 = ((-b + (sqrt(b * b) - 4 * a * c))) / (2 * a);
	x2 = ((-b - (sqrt(b * b) - 4 * a * c))) / (2 * a);

	printf("ù ��° �� %.2f �� ��° �� %.2f", x1, x2);



	return 0;
}