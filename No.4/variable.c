/* �ǽ� 4 : varlable.c
   �ۼ��� : 2022.03.11
   �ۼ��� : ������
   ���α׷� ���� : ������ ���� ������ ������ �����ϰ� ����ϴ� ���α׷�
*/

#include <stdio.h>

int main() {
	 
	short age = 128; // short int�� ����
	unsigned int salary = 2500000000; // unsigned ��ȣ X
	float pi = 3.14f;
	char grade = 2; // int�� ���� (char�� ������)
	char credit = 'A';

	printf("age = %hd", age); // ������ %d�� ����
	printf("salary = %ud", salary); //unsigned -> %ud
	printf("pi = %fd", pi);
	printf("grade = %d", grade);
	printf("credit = %c", credit);

	return 0;
}