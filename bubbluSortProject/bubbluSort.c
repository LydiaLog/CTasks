/* 9���� �ǽ� 5�� : bubbleSort.c
   �ۼ��� : 2022. 04. 29
   �ۼ��� : ������
   ���α׷� ���� : 1���� �迭�� ���������ϰ� ����ϴ� ���α׷�
*/

#include <stdio.h>
//�Լ� ����
void printArray(int arr[]);
void sort(int arr[]); // ���ĸ� �ϸ� �Ǵϱ� ���ϰ� ���ʿ�(void)

int main(int agrc, char* argv[]) {
	int arr[] = { 1,9,2,8,3,7,4,6,5,0 };

	printf("���� �� \n");
	printArray(arr);

	sort(arr);

	printf("\n ���� �� \n");
	printArray(arr);

	return 0;
}
void sort(int arr[]) { // ���������� �̿��� �� ���� ���� ��
	int i, j; // �⺻������ 2���� ���� �ʿ�
	int temp;

	for (i = 0; i < 10; i++) {
		for(j = 0; j < 10 - 1; j++) // �̿��� �� �� ���� ���ϹǷ� ������ - 1���� ��
			if (arr[j] < arr[j + 1]) { // ���� �迭�� ���� �迭���� Ŭ ���
				// �� ���� �ٲ��ش� 
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
	}
}
void printArray(int arr[]) {
	int i = 0;
	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);
}