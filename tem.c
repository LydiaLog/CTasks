#define _CRT_SECURE_NO_WARNINGS

/* 3���� �ǽ� 4�� : tem.c
   �ۼ��� : 2022. 03. 16
   �ۼ��� : ������
   ���α׷� ���� : �����µ��� �Է¹޾� ȭ���µ��� �����Ͽ� 
                   ����ϴ� ���α׷�
*/

#include <stdio.h>

int main(int argc, char* argv[])
{
    double C, F;

    printf("�����µ��� �Է��ϼ��� : ");
    scanf("%lf", &C);

    F = 32 + (C * 180.0 / 100.0);
    printf("�����µ� %2.2lf�� ȭ���µ��� ������ �� : %2.2lf", C, F);

    return 0;
}