/* 10주차 실습 3번 : printAdress.c
   작성일 : 2022. 05. 04
   작성자 : 윤서은
   프로그램 설명 : 정수, 실수, 문자 변수를 선언하고 각 변수의 메모리 상의 주소를 출력하는 프로그램
*/

#include <stdio.h>
//함수 선언
void print_address(int* , double* , char*);

int main() {

	// 정수, 실수, 문자 변수 선언과 동시에 초기화
	int a = 15;
	double b = 1.1;
	char c = 'a';

	print_address(&a, &b, &c);

	return 0;
}
void print_address(int* ap, double* bp, char* cp) //각 변수의 메모리 상의 주소를 출력할 함수
{
	printf(" 정수의 주소는 : %p\n 실수의 주소는 : %p\n 문자의 주소는 : %p\n ", &ap, &bp, &cp);
}