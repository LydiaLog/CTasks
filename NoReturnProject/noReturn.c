#define _CRT_SECURE_NO_WARNINGS

/* 10���� �ǽ� 1�� : noReturn.c
   �ۼ��� : 2022. 05. 04
   �ۼ��� : ������
   ���α׷� ���� : ���� �� ���� �����͸� �̿��� ������� �����ϴ� ���α׷�
*/

#include <stdio.h>
// ������ ����
void mul(double *, double *, double *);

int main() {

	double res, a, b; // res�� �� ���� ��, a, b�� ���� ����ڷκ��� �Է¹��� ���� ��Ÿ���� ����

	printf("�� ���� ���ڸ� �Է��ϼ��� : ");
	scanf("%lf%lf", &a, &b); // �Ǽ��� ���� a, b �� �Է� �ޱ�
	mul(&res, &a, &b);
	printf("�� ���� ���� : %.2lf\n", res);
	return 0;
}

void mul(double* rp, double* ap, double* bp) // rp�� res, ap�� a, bp�� b�� ���� �����ϴ� ������(line 19)
{
	*rp = *ap * *bp; // *ap, *bp ������ *�� ���ϱ� ���� ��Ÿ��
}