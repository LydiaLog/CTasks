#define _CRT_SECURE_NO_WARNINGS

/* 4���� �ǽ� 3�� : volume.c
   �ۼ��� : 2022. 03. 23
   �ۼ��� : ������
   ���α׷� ���� : �Լ��� Ȱ���� ������ ����, �������� �Է¹޾�
                   ���Ǹ� ����ϰ� ����ϴ� ���α׷�
*/

#include <stdio.h>

double getVolume(int h, int r, double pi);
double printResult(int h, int r, double v);

int main(int argc, char* argv[])
{
    int h, r;
    double v = 0.0;
    double pi = 3.14;

    printf("������ ���̿� �������� �Է��ϼ��� : ");
    scanf("%d%d", &h, &r);

    v = getVolume(h, r, pi);
    printResult(h, r, v);

    return 0;
}

double getVolume(int h, int r, double pi) {

    return 1.0 / 3.0 * pi * r * r * h;
}

double printResult(int h, int r, double v) {

    printf("���̰� %d, �������� %d �� ������ ���� : %4.1f", h, r, v);
    return 0;

}
