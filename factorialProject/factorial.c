/* 6���� �ǽ� 6�� : factorial.c
   �ۼ��� : 2022. 04. 05
   �ۼ��� : ������
   ���α׷� ���� : ����ڷκ��� �Է¹��� ������ ���丮�� ���� ����ϴ� ���α׷�
*/

#include <stdio.h>

int main(void) {

	int n = 0; //�Է¹��� ����
	long long int facValue = 1L; //���丮�� ��
	int i = 0;

	printf("���丮�� n���� �Է��Ͻÿ� : ");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++) {
		facValue *= i; // facValue = facValue * i�� ����
	}

	printf("%d! = %lld", n, facValue);

	return 0;
}