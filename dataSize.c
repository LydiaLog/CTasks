/* 실습 2 : dataSize.c
   작성일 : 2022.03.11
   작성자 : 윤서은
   프로그램 설명 : sizeof 연산자를 이용한 각 자료형의 크기 확인
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