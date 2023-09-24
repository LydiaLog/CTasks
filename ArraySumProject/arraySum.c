/* 11���� �ǽ� 2�� : arraySum.c
   �ۼ��� : 2022. 05. 14
   �ۼ��� : ������
   ���α׷� ���� : 1���� �迭�� �����ϰ� �迭�� ���� �������� ������� 0���� �Ǻ��ϴ� �Լ��� �̿��� ����� ����ϴ� ���α׷�
*/

#include <stdio.h>

//�Լ� ����

int sumArray(int* arr, int* sum);
void printArray(const int* arr, int size);

int main()
{
	int arr[10] = { 1, -1, -1, 1, -1, 1, -1, 0, -1, 1 }; //�־��� 1���� �迭 ����
	int sum = 0;
	int size = 0;

	sum = sumArray(arr, &sum);
	printArray(arr, sum);

	return 0;
}
int sumArray(int* arr, int* sum) {

		int i;

	for (i = 0; i < 10; i++) { //�迭ũ�⸸ŭ �ݺ��ϸ� �� ������Ű��
		sum += *(arr + i); //�迭 ���� ���ؼ� sum�� ����

		if (sum > 0) { //�迭�� ���� ����� ���
			return 1; // 1�� ����
		}
		else if (sum < 0) { // �迭�� ���� ������ ���
			return -1; // -1�� ����
		}
		else { // (sum == 0) �迭�� ���� 0�� ���
			return 0; //0�� ����
		}
	}
		return *sum;
}

void printArray(const int* arr, int size) {

	int i = 0;

	for (i = 0; i < 10; i++) { //�迭�� ũ��(10)��ŭ �ݺ�(�� ������Ű�鼭)
		printf("%d, ", arr[i]); // �迭 �� ����
	}
	printf("���� %d �̰�\n", arr[size]); //�迭�� �� ���

		if (arr[size] > 0){ //�迭�� ���� 0���� ū ���
			printf("�迭�� ���� ����Դϴ�"); 
		}
		else if (arr[size] < 0) { // �迭�� ���� 0���� ���� ���
			printf("�迭�� ���� �����Դϴ�");
		}
		else {// (arr[size] == 0) �迭�� ���� 0�� ���
			printf("�迭�� ���� 0�Դϴ�");
		}
}