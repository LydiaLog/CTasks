/* 실습 1 : print_value.c
   작성일 : 2022. 03. 11
   작성자 : 윤서은
   프로그램 설명 : 상수와 변수의 출력
*/
#include <stdio.h> // 전처리

int main(){
	
	//변수 선언부
	char ch = 'M'; //char은 1바이트
	int iValue = 95; // int는 4바이트
	double dValue = 3.14; // pi 값
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