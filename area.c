#define _CRT_SECURE_NO_WARNINGS

/* 3주차 실습 5번 : area.c
   작성일 : 2022. 03. 16
   작성자 : 윤서은
   프로그램 설명 : 면적의 단위인 평을 평방미터로 계산하는 프로그램

*/

#include <stdio.h>

int main(int argc, char* argv[])
{
	int p;
	double area;

	printf("평을 입력하세요 : ");
	scanf("%d", &p);

	area = 3.3 * p;
	printf("%d 평을 평방미터로 바꾼 값 : %2.1lf ", p, area);

	return 0;
}