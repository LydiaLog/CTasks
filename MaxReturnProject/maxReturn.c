/* 11���� �ǽ� 1�� : maxReturn.c
   �ۼ��� : 2022. 05. 14
   �ۼ��� : ������
   ���α׷� ���� : 1���� �迭 �� ���� ū ���� �޸� �ּҸ� ��ȯ�ϴ� find_max�Լ��� �̿��� ���� ū ���� ����ϴ� ���α׷�
*/


#include <stdio.h>

//�Լ� ����

void find_max(int* arr, int* max);

int main()
{
	int arr[10] = { 12, 22, 4, 54, 1, 19, 44, 29, 37 }; //�־��� 1���� �迭 ����
	int max; //�ִ밪

	find_max(arr, &max);
	printf("���� �迭�� �� �� ���� ū ���� %d �Դϴ�.", max);

	return 0;
}

void find_max(int* arr, int* max)
{
	*max = arr[0];   // �ִ밪�� �ϴ� �迭 ù��° ���� �ְ�

	for (int i = 1; i < 10; i++) //�迭�� ũ�⸸ŭ �ݺ�
	{
		// �迭 i ��° ���� �ִ밪 ���� ũ�� �ִ밪�� �迭 i ��° �� �Ҵ� 
		if (arr[i] > *max) {
			*max = arr[i];
		}
	}
}