/* �ǽ� 2 : dataSize.c
   �ۼ��� : 2022.03.11
   �ۼ��� : ������
   ���α׷� ���� : sizeof �����ڸ� �̿��� �� �ڷ����� ũ�� Ȯ��
*/
#include <stdio.h>

int main()
{
	char ch = 'A';
	int i = 65;
	double d = 3.14;

	printf("\n[ THE SIZE OF DATATYPE ]\n");
	printf("char : %d\n", sizeof(char));
	printf("char ch = \'A\': %d\n", sizeof(ch));
	printf("int : %d\n", sizeof(int));
	printf("int i = 65 : %d\n", sizeof(i));
	printf("short int : %d\n", sizeof(short int));
	printf("long int : %d\n", sizeof(long int));
	printf("float : %d\n", sizeof(float));
	printf("double : %d\n", sizeof(double));
	printf("double d = 3.14: %d\n", sizeof(d));
	printf("long double : %d\n", sizeof(long double));
	printf("string \'Hello\' : %d\n", sizeof("Hello"));
	printf("default constant 1 : %d\n", sizeof(7));
	printf("default constant 2 : %d\n", sizeof(10.12));

	return 0;
}