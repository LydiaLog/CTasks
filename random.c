#define _CRT_SECURE_NO_WARNINGS

/* 4���� �ǽ� 5�� : random.c
   �ۼ��� : 2022. 03. 23
   �ۼ��� : ������
   ���α׷� ���� : ������ �Է¹޾�(n) 1 ~ n �߿���
                   getRandom �Լ��� �̿��� �������� ����ϴ� ���α׷�
*/

#include <stdio.h>
#include <stdlib.h> // �����Լ� ���

int main(void)
{
    int n = 0;
    int r = 0;
    printf("���� ������ �����ϼ��� : ");
    scanf("%d", &n);

    r = getRandom(n);

    printf("�Էµ� ���� �� ������ �������� %d �Դϴ�.", r);

    return 0;

}

int getRandom(int n) {

    return rand() % n + 1;

}


/*
    0 ~ 11   rand() % 12
    0 ~ 100  rand() % 101
    1 ~ 100  rand() % 100 + 1
    20 ~ 30  rand() % 11 + 20
    1 ~ 3    rand() % 3 + 1
*/