/* 9���� �ǽ� 6�� : twoDimArray.c
   �ۼ��� : 2022. 04. 29
   �ۼ��� : ������
   ���α׷� ���� : �־��� 2���� �迭�� �����ϰ� �迭�� ��ġ�� ���� printArray �Լ��� �̿��� ����ϴ� ���α׷�
*/

#include <stdio.h>
//�Լ� ����
void printArray(int arr[][8]); // ������ �迭�� 1���� ���Ҽ� ���� �Ұ���

int main(int agrc, char* argv[]) {

    int twoDim[2][8] = { {1,3,5,7,9,11,13,15},{2,4,6,8,10,12,14,16} }; // 2���� �迭 ����� ���ÿ� �ʱ�ȭ

    printArray(twoDim);

    return 0;
}
void printArray(int arr[][8]) {
	int i, j;

	//���� ������ ����
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 8; j++) {
			printf("[%d][%d] = %d ", i, j, arr[i][j]);
		}
		printf("\n");
	}
		
}