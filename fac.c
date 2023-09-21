#define _CRT_SECURE_NO_WARNINGS

/* 4주차 실습 6번 : fac.c
   작성일 : 2022. 03. 23
   작성자 : 윤서은
   프로그램 설명 : 재귀 호출을 이용해 팩토리얼을 계산하는 프로그램
*/

#include <stdio.h>

long long factorial(int n);

int main(void) {

	int num = 0;
	long long fact;

	printf("계산할 팩토리얼의 크기를 입력하세요 : ");
	scanf("%d", &num);

	fact = factorial(num);

	printf("1부터 %d까지의 팩토리얼의 값 : %lld", num, fact);

	return 0;

}

long long factorial(int n) {

	if (n == 1)
		return 1;
	else
		return n * factorial(n - 1);

}