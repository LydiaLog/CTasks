/* 10���� �ǽ� 4�� : swap.c
   �ۼ��� : 2022. 05. 04
   �ۼ��� : ������
   ���α׷� ���� : main �Լ����� swap �Լ��� �� ������ �ּҸ� �����Ͽ� swap �Լ��� ���� �� ������ ���� �ٲٴ� ���α׷�
*/

#include <stdio.h>
//�Լ� ����
void swap(int*, int*);

int main() 
{	
	int value1 = 10; // ù ��° ������ ���� ����� ���ÿ� �ʱ�ȭ
	int value2 = 20; // �� ��° ������ ���� ����� ���ÿ� �ʱ�ȭ

	printf("��ȯ �� value1 �� : %d, value2 �� : %d \n", &value1, &value2);
	swap(&value1, &value2); 
	printf("��ȯ �� value1 �� : %d, value2 �� : %d \n", &value1, &value2);

	return 0;
}

void swap(int *v1, int *v2) { // �� ������ ���� �ٲ��ִ� �Լ�
	int temp; // �� �ű� �� �ʿ��� �� ����

	temp = *v1; // temp�� *v1 ����
	*v1 = *v2; // *v1�� *v2 ����
	*v2 = temp; // *v2�� temp ����

}