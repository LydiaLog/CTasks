/* 6���� �ǽ� 4�� : average.c
   �ۼ��� : 2022. 04. 05
   �ۼ��� : ������
   ���α׷� ���� : for���� ����� n���� �Է¹޾� �־��� ������ ����ϴ� ���α׷�
*/

#include <stdio.h>

//�Լ� ����
int calc(int n);

int main(void)
{
	int n = 0; //�ݺ��� Ƚ���� ��Ÿ���� ������
	int result = 0;

	printf("�ݺ��� Ƚ���� �Է��ϼ��� : ");
	scanf_s("%d", &n);

	//�Լ� ȣ��
	result = calc(n);

	printf("�־��� ���� ��� : %d", result);

	return 0;
}
int calc(int n) {
	int result = 0;
	int i = 0;

	for (i = 1; i <= n; i++) { //i�� 1����
		result += (i * i + 1); 
	}
	return result;
}