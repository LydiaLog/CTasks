/* 6���� �ǽ� 3�� : average.c
   �ۼ��� : 2022. 04. 05
   �ۼ��� : ������
   ���α׷� ���� : do while���� ����� 0�� �ƴ� ������ �Էµ� �������� 
                   �հ� ����� ����ϴ� ���α׷�
*/

#include <stdio.h>

//�Լ� ����
double average(int total, int count);

int main(void) 
{
    int n = 0; // ����ڷκ��� �Է¹��� ����
    int total = 0; // �Է� ���� �������� ��
    double avg = 0.0; // ���
    int count = 0;
    do {
        printf("���� �Է� : ");
        scanf_s("%d", &n);
        if (n != 0) { //0�� �ƴ� ���
            total += n; //�����ֱ�

            //�Լ� ȣ��
            avg = average(total, ++count);

            printf("-> �� : %d ��� : %.1f\n", total, avg);
        }
        else //0�� ���
            printf("-> ����"); // ���α׷� ����
    } while (n != 0);

    return 0;
}
double average(int total, int count) {
    return (double)total / count;
}
