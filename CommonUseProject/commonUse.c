/* 13���� �ǽ� 2�� : commomUse.c
   �ۼ��� : 2022. 05. 28
   �ۼ��� : ������
   ���α׷� ���� : ����ü �����ڷ��� �׽�Ʈ ���α׷�
                   ����ü�� �޸𸮿��� ���� �ٸ� ������ ������ ������ �� �ֵ��� �ϴ� ����
                   ����ü�� ���� ���� ��� ����
*/

#include <stdio.h>

int main(void) {
    union { //����ü�� union�̶�� Ű���� ���
        short num;
        char chAry[2];
    }data;

    data.num = 16706;

    printf("short: %hd\n", data.num);

    data.chAry[0] = 'A';
    data.chAry[1] = 'B';
    // �� �̻� data.num�� �ش��ϴ� ���� ����� �� ����.
    printf("Ch[0] : %c\n", data.chAry[0]);
    printf("Ch[1] : %c\n", data.chAry[1]);
    // printf ("short: %hd\n" , data.num);  // ����� Ȯ���� ������.
    return 0;
}