#define _CRT_SECURE_NO_WARNINGS

/* 3���� �ǽ� 3�� : volume.c
   �ۼ��� : 2022. 03. 16
   �ۼ��� : ������
   ���α׷� ���� : ������ ����, �������� �Է¹޾� ���Ǹ� ����Ͽ�
                   ����ϴ� ���α׷�
*/

#include <stdio.h>

int main(int argc, char* argv[])
{
    int h, r;
    double v = 0.0;
    double pi = 3.14;

    printf("������ ���̿� �������� �Է��ϼ��� : ");
    scanf("%d%d", &h, &r);

    v = 1.0 / 3.0 * pi * r * r * h;

    printf("���̰� %d, �������� %d �� ������ ���� : %4.1f", h, r, v);

    return 0;
}