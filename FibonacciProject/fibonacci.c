/* 9���� �ǽ� 2�� : fibonacci.c
   �ۼ��� : 2022. 04. 29
   �ۼ��� : ������
   ���α׷� ���� : ������ �迭 10���� �����ϰ� �� �迭�� �Ǻ���ġ������ ���� �ݺ����� �̿��ؼ� �����ϰ� 
                   ����� printArray �Լ�,setFiboArray��� �Ǻ���ġ������ �����ϴ� �Լ��� �̿��� ���� ����ϴ� ���α׷�
   
*/
# include <stdio.h>
//�Լ� ����
void printArray(int fiboArr[]);
void setFiboArray(int fiboArr[]);

int main(int agrc, char* argv[]) {
    int fiboArr[10] = { 0,1 }; // 0��° ���� 0, 1��° ���� 1�� �ʱ�ȭ, ������ ������ �⺻ �� 0���� �ʱ�ȭ

    setFiboArray(fiboArr);
    printArray(fiboArr);

    return 0;
}
void setFiboArray(int fiboArr[]) {
    int i = 0;

    /*fiboArr[0] = 0;
    fiboArr[1] = 1;*/

    for (i = 2; i < 10; i++) { // 0,1 ��° ���� �ʱ�ȭ �Ǿ������Ƿ� 2��° ������ 
        fiboArr[i] = fiboArr[i - 2] + fiboArr[i - 1]; // �Ǻ���ġ ���Ŀ� ���� ��
    }
}
void printArray(int fiboArr[]) {
    int i = 0;

    printf("[ ");
    for (i = 0; i < 10; i++) {
        printf("%d ", fiboArr[i]);
    }
    printf("]");
}