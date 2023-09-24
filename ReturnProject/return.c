#define _CRT_SECURE_NO_WARNINGS

/* 10주차 실습 2번 : return.c
   작성일 : 2022. 05. 04
   작성자 : 윤서은
   프로그램 설명 : 포인터를 리턴하는 프로그램
*/

#include <stdio.h>
// 포인터 선언
double* mul(double* ap, double* bp);

int main()
{
	double a, b; //각각 사용자로부터 입력받을 값을 나타내는 변수
	double* res = NULL; // 포인터 변수에 널 포인터로 초기화 (NULL은 <stlib.h>에 define되어있음)

	printf("두 개의 숫자를 입력하세요 : ");
	scanf("%lf%lf", &a, &b); // 실수형 변수 a, b 값 입력 받기
	res = mul(&a, &b);
	printf("두 수의 곱은 : %.2lf\n", *res);
	return 0;
}
double* mul(double* ap, double* bp)
{
	double rp;
	rp = *ap * *bp; //포인터의 곱
	return &rp; //rp의 주소 반환
}