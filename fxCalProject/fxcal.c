#define _CRT_SECURE_NO_WARNINGS

/* 5주차 실습 4번 : fxcal.c
   작성일 : 2022. 03. 29
   작성자 : 윤서은
   프로그램 설명 : x값을 입력받아 함수값을 계산하는 프로그램
*/

#include <stdio.h>

int main(void)
{
	double x = 0.0; //사용자로부터 입력 받을 x값
	printf("x의 값을 입력하세요 : ");
	scanf("%lf", &x); // 실수 x의 값 입력 받기

	if (x <= 0) //0보다 작거나 같을 때의 계산식
		printf("x의 값이 %.2lf일 때 x^3 - 9x + 2의 값은 %.2f 입니다.", x, (x * x * x - 9 * x + 2));
	else // 그 외의 경우의 계산식
		printf("x의 값이 %.2lf일 때 7x + 2의 값은 %.2f 입니다.", x, (7 * x + 2));

	return 0;

}