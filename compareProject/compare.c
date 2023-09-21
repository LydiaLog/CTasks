#define _CRT_SECURE_NO_WARNINGS

/* 5주차 실습 3번 : compare.c
   작성일 : 2022. 03. 29
   작성자 : 윤서은
   프로그램 설명 : 입력받은 두 수의 크기를 비교하는 프로그램
*/

#include <stdio.h>

int main(void)
{
	int a; // 사용자로부터 입력 받을 첫 번째 정수
	int b; // 사용자로부터 입력 받을 두 번째 정수

	printf("첫 번째 정수를 입력하세요 : ");
	scanf("%d", &a); // 정수 a값 입력 받기

	printf("두 번째 정수를 입력하세요 : ");
	scanf("%d", &b); // 정수 b 값 입력 받기

	if (a > b)
		printf("첫 번째 정수 %d가 두 번째 정수 %d보다 크다. ", a, b); //a가 b보다 큰 수 일 때
	else if (a < b)
		printf("첫 번째 정수 %d가 두 번째 정수 %d보다 작다. ", a, b); // a가 b보다 작은 수 일 때
	else
		printf("첫 번째 정수 %d와 두 번째 정수 %d는 같다. ", a, b); // 그 외의 경우 (a와 b가 같을 때)

	return 0;
}
