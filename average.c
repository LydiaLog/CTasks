#define _CRT_SECURE_NO_WARNINGS

/* 4���� �ǽ� 2�� : average.c
   �ۼ��� : 2022. 03. 23
   �ۼ��� : ������
   ���α׷� ���� : getAverage(��� ��� �Լ�), printResult(��� �Լ�)��
                   �̿��� �Ǽ��� �Է¹޾� ����ϴ� ���α׷�
*/

#include <stdio.h>

double getAverage(double num1, double num2);
double printResult(double num1, double num2, double result);

int main(void)
{
    double num1 = 0.0;
    double num2 = 0.0;
    double result = 0.0;

    printf("�� �Ǽ����� �Է��ϼ��� : ");
    scanf("%lf%lf", &num1, &num2);

    result = getAverage(num1, num2);

    printResult(num1, num2, result);

    return 0;
}

double getAverage(double num1, double num2) {

    return (num1 + num2) / 2.0;

}
double printResult(double num1, double num2, double result) {

    printf("�� �� %.1f, %.1f�� ��հ� : %.1f", num1, num2, result);

    return 0;

}