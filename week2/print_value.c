/* �ǽ� 1 : print_value.c
   �ۼ��� : 2022. 03. 11
   �ۼ��� : ������
   ���α׷� ���� : ����� ������ ���
*/
#include <stdio.h> // ��ó��

int main(){
	
	//���� �����
	char ch = 'M'; //char�� 1����Ʈ
	int iValue = 95; // int�� 4����Ʈ
	double dValue = 3.14; // pi ��
	float fValue = 1.414f; 

	printf("\n[ Print value ]\n");
	printf("char : %c \n", 'W');
	printf("char variable  : %c \n", ch);
	printf("int value : %d \n", 20);
	printf("int constants formula : %d \n", 10 + 20);
	printf("int variable  : %d \n", iValue);
	printf("double value : %f \n", 3.1415);
	printf("double variable : %f \n", dValue);
	printf("float variable : %f \n", fValue);
	printf("int variable : %d and float variable : %f \n", iValue, fValue);

	return 0;
}