#define _CRT_SECURE_NO_WARNINGS

/* 10���� �ǽ� 2�� : return.c
   �ۼ��� : 2022. 05. 04
   �ۼ��� : ������
   ���α׷� ���� : �����͸� �����ϴ� ���α׷�
*/

#include <stdio.h>
// ������ ����
double* mul(double* ap, double* bp);

int main()
{
	double a, b; //���� ����ڷκ��� �Է¹��� ���� ��Ÿ���� ����
	double* res = NULL; // ������ ������ �� �����ͷ� �ʱ�ȭ (NULL�� <stlib.h>�� define�Ǿ�����)

	printf("�� ���� ���ڸ� �Է��ϼ��� : ");
	scanf("%lf%lf", &a, &b); // �Ǽ��� ���� a, b �� �Է� �ޱ�
	res = mul(&a, &b);
	printf("�� ���� ���� : %.2lf\n", *res);
	return 0;
}
double* mul(double* ap, double* bp)
{
	double rp;
	rp = *ap * *bp; //�������� ��
	return &rp; //rp�� �ּ� ��ȯ
}