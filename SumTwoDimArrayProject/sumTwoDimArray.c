/* 9���� �ǽ� 8�� : sumTwoDimArray.c
   �ۼ��� : 2022. 04. 30
   �ۼ��� : ������
   ���α׷� ���� : 5 X 5 ����� �� ��� ���� ���� ��� �����ϴ� �Լ��� �ۼ��ϴ� ���α׷�
*/

#include <stdio.h>

int main(int agrc, char* argv[]) {

	int arr[5][5] = { {1,2,3,4,5},
					  {1,2,3,4,5},
					  {1,2,3,4,5},
		              {1,2,3,4,5},
		              {1,2,3,4,5}
					};
	int i, j;	
	//�հ踦 ���� ����
	int rowSum[5] = { 0 };
	int colSum[5] = { 0 };



	//2���� ���
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%3d", arr[i][j]);
			rowSum[i] += arr[i][j]; // �� �հ�
			colSum[j] += arr[i][j]; // �� �հ�

		}
		printf("%3d \n", rowSum[i]); //�� ���
	}
	for (i = 0; i < 5; i++) {
		printf("%3d", colSum[i]); //�� ���
	}

	return 0;
}