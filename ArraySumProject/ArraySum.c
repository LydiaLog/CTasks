/* 9���� �ǽ� 1�� : ArraySum.c
   �ۼ��� : 2022. 04. 29
   �ۼ��� : ������
   ���α׷� ���� : 10���� ������ �迭�� �־��� ������ ����� ���ÿ� �ʱ�ȭ�ϰ�
                   �ݺ����� �迭�� ����ϴ� printArray �Լ�, ������ ����ϴ� sumArray �Լ��� �̿��� 
                   �迭�� ���� ������ ����� ����ϴ� ���α׷�
*/

#include <stdio.h>

// �Լ� ����
int arraySum(int arr[]);
void printArray(int arr[]); // ���� ���� �ʿ� ��� void

int main(int agrc, char* argv[]) {
    int intArr[10] = { 4,2,3,1,4,5,6,7,4,3 }; // 10���� ������ �迭 ����� ���ÿ� �ʱ�ȭ
    int i = 0;
    int sum = 0; 

    sum = arraySum(intArr);

    printf("�迭 ��ü �� : %d \n", sum);

    printArray(intArr);

    return 0;
}
int arraySum(int arr[]) {
    int sum = 0;// ���� �迭 ���� ����� ���� ����
    int i = 0;
    for (i = 0; i < 10; i++) {
        sum += arr[i]; //���� ������Ų��
    }
    return sum;// ������Ų ������ �ݿ��� ���� sum�� ��ȯ
}
void printArray(int arr[]) {
    int i = 0;
    for (i = 0; i < 10; i++) { // �ݺ����� �̿��� 10���� �迭 ��¹�
        if(i < 9) // i�� 9���� ���� ���
            printf("�迭[%d] = %d \n",i, arr[i]); // ���� ����ϰ� �ٹٲ�
        else // �� ���� ���
            printf("�迭[%d] = %d ",i, arr[i]); // ���ڸ� ���
    }

}