/* 6���� �ǽ� 7�� : fibonacci.c
   �ۼ��� : 2022. 04. 05
   �ۼ��� : ������
   ���α׷� ���� : ����ڷκ��� �Է¹��� ���ڱ����� �Ǻ���ġ ������ ����ϴ� ���α׷�
*/

#include <stdio.h>

int main(void) {

	int first = 0; //ù��° ��
	int second = 1; //�ι�° ��
	int next = 0; //���� ��
	int i = 0;
	int last = 0;// �Է� ���� ������ ��
	int sum = 1; // ���� ��

	printf("�Ǻ���ġ ������ ������ ���� �Է��Ͻÿ� : ");
	scanf_s("%d", &last);

	if (last == 0) { //������ ���� 0�� ���
		printf("�Ǻ���ġ ���� : %d", 0);
		printf("���� �հ� : %d", 0);
	}
	else if (last == 1) { // ������ ���� 1�� ���
		printf("�Ǻ���ġ ���� %d, %d", 0, 1);
		printf("�Ǻ���ġ ���� %d", 1);
	}
	else { // �� ���� ���
		printf("�Ǻ���ġ ���� %d, %d", 0, 1);

		for (i = 2; i < last; i++) {
			next = first + second;
			if(i == last - 1)
				printf("%d, ", next);
			else
				printf("%d, ", next);
			first = second;
			second = next;
			sum += next; // sum = sum + next�� ����
		}
		printf("\n���� �հ� : %d", sum);
	}
	return 0;
}
