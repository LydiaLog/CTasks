#define _CRT_SECURE_NO_WARNINGS

/* 3���� �ǽ� 8�� : condition.c
   �ۼ��� : 2022. 03. 16
   �ۼ��� : ������
   ���α׷� ���� : �־��� ������ ���迬��, ���������� �����
                   ����ϴ� ���α׷�
*/

#include <stdio.h>


int main(int argc, char* argv[])
{
    char married = 'y';
    printf("��ȥ�ΰ� %d\n", married == 'y');

    int age = 22;
    char gender = 'f';
    printf("���̰� 19�� �̻��̰� �����ΰ� %d\n", age >= 19 && gender == 'm');

    int c = 100;
    int e = 80;
    int m = 90;
    int total = c + e + m;
    int ave = total / 3;
    printf("��ǻ�Ϳ� ���� �׸��� ���� ��ΰ� 90�� �̻��ΰ� %d\n", c >= 90 && e >= 90 && m >= 90);
    printf("������ 200�� �̻��̰ų� ����� 60�� �̻��ΰ� %d\n", total >= 200 || ave >= 60);
    
    int score = 90;
    int ab = 2;
    printf("������ 60�� �̸��̰ų� �ἮȽ���� 4�� �̻��ΰ� %d\n", score < 60 || ab >= 4);

    int year = 2022;
    printf("������ �⵵�� �����ΰ� %d\n", (year % 4) == 0 && (year % 100) != 0 || (year % 400) == 0);

    int num ;
    printf("���ڸ� �Է��ϼ��� : ");
    scanf("%d", &num);
    printf("�Էµ� ���� %d�� ¦���ΰ� %d\n", num, num % 2 == 0);
    printf("�Էµ� ���ڰ� 3�� 5�� ������ΰ� %d\n", num % 3 == 0 && num % 5 == 0);

    return 0;
}