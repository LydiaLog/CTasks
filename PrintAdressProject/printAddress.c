/* 10���� �ǽ� 3�� : printAdress.c
   �ۼ��� : 2022. 05. 04
   �ۼ��� : ������
   ���α׷� ���� : ����, �Ǽ�, ���� ������ �����ϰ� �� ������ �޸� ���� �ּҸ� ����ϴ� ���α׷�
*/

#include <stdio.h>
//�Լ� ����
void print_address(int* , double* , char*);

int main() {

	// ����, �Ǽ�, ���� ���� ����� ���ÿ� �ʱ�ȭ
	int a = 15;
	double b = 1.1;
	char c = 'a';

	print_address(&a, &b, &c);

	return 0;
}
void print_address(int* ap, double* bp, char* cp) //�� ������ �޸� ���� �ּҸ� ����� �Լ�
{
	printf(" ������ �ּҴ� : %p\n �Ǽ��� �ּҴ� : %p\n ������ �ּҴ� : %p\n ", &ap, &bp, &cp);
}