#define _CRT_SECURE_NO_WARNINGS

/* 10주차 실습 1번 : noReturn.c
   작성일 : 2022. 05. 04
   작성자 : 윤서은
   프로그램 설명 : 리턴 값 없이 포인터를 이용해 결과값을 결정하는 프로그램
*/

#include <stdio.h>
// 포인터 선언
void mul(double *, double *, double *);

int main() {

	double res, a, b; // res는 두 수의 곱, a, b는 각각 사용자로부터 입력받을 값을 나타내는 변수

	printf("두 개의 숫자를 입력하세요 : ");
	scanf("%lf%lf", &a, &b); // 실수형 변수 a, b 값 입력 받기
	mul(&res, &a, &b);
	printf("두 수의 곱은 : %.2lf\n", res);
	return 0;
}

void mul(double* rp, double* ap, double* bp) // rp는 res, ap는 a, bp는 b의 값을 참조하는 포인터(line 19)
{
	*rp = *ap * *bp; // *ap, *bp 사이의 *은 곱하기 연산 나타냄
}