/* 6���� �ǽ� 1�� : sum.c
   �ۼ��� : 2022. 04. 04
   �ۼ��� : ������
   ���α׷� ���� : for �ݺ����� if���ǹ��� �̿��� 1���� ����ڰ� �Է��� ���ڱ����� 
                   Ȧ���� ¦���� ��(sum �Լ��̿�)�� ���� ����ϴ� ���α׷�              
*/
#include <stdio.h>

//�Լ� ����
int sum(int end, int mode);

int main(void)
{
    int end = 0; // ����ڷκ��� �Է¹��� ������ ��
    int i;
    int total = 0;

    printf("���� ����� ������ ���� �Է��ϼ��� : ");
    scanf_s("%d", &end); // ���� n�Է� �ޱ�

    printf("1���� %d������ \n", end);

    printf("\t ¦���� �� : %d\n", sum(end, 2));
    printf("\t Ȧ���� �� : %d\n", sum(end, 1));
    printf("\t �� �� : %d\n", sum(end, 0));
    
    return 0;
}   

int sum(int end, int mode) {

    int total = 0;
    int i;

    if (mode == 2) { //¦�� �� ���
        for (i = 1; i <= end; i++) { // i�� 1����
            if (i % 2 == 0) //¦���� ���
                total += i;
        }
    }
    else if (mode == 1) { // Ȧ�� �� ���
        for (i = 1; i <= end; i++) {
            if (i % 2 == 1) //Ȧ���� ���
                total += i;
        }
    }
    else { // �� �� ���
        for (i = 1; i <= end; i++)
            total += i;
    }
    return total;
}