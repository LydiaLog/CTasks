/* 11���� �ǽ� 4�� : twoDimPrintArray.c
   �ۼ��� : 2022. 05. 14
   �ۼ��� : ������
   ���α׷� ���� : 2���� �迭�� �����ϰ� 2���� �迭�� �Լ��� ������ ����ϴ� ���α׷�
*/


#include <stdio.h>

void printArray(int(*ary)[4]);
//void printArray(int ary[][4]);

int main()
{
	int array[][4] = { {1,2,3,4},{5,6,7,8} };

	printArray(array); //�迭�� 2���� �迭�� �̸����� ����

	return 0;
}
//��� 1(�ּҿ���)
void printArray(int(*ary)[4]) {
	int i, j; // 2�� ���� �ʿ�
	for (i = 0; i < 2; i++) { //2�����迭
		for (j = 0; j < 4; j++) {// 4�� ����
			printf("%d ", *(*ary + j));
		}
		printf("\n");
		ary++;
	}
}
//��� 2(�ε���)
/*void printArray(int ary[][4]) {
	int i, j; // 2�� ���� �ʿ�

	for (i = 0; i < 2; i++) { //2�����迭
		for (j = 0; j < 4; j++) {// 4�� ����
			printf("%d ", ary[i][j]);
		}
		printf("\n");
	}
}
*/