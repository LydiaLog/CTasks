#define _CRT_SECURE_NO_WARNINGS

/* 실습 7 : scanfExample.c
   작성일 : 2022.03.11
   작성자 : 윤서은
   프로그램 설명 : 자료형에 따른 scanf 형식지정자 사용
*/
#include <stdio.h>

int main()
{
	short s;
	long l;
	unsigned u;

	printf("Enter a short number : ");
	scanf("%hd", &s);
	printf("Enter a long number : ");
	scanf("%ld", &l);
	printf("Enter an unsigned number : ");
	scanf("%u", &u);

	printf("\n%hd %ld %u \n", s, l, u);
	return 0;
}