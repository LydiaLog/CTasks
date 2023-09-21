#define _CRT_SECURE_NO_WARNINGS

/* 3주차 실습 1번 : square.c
   작성일 : 2022. 03. 16
   작성자 : 윤서은
   프로그램 설명 : 두 정수를 입력받아 사각형의 넓이를 계산하는 프로그램
*/

#include <stdio.h>

int main(int argc, char* argv[])
{
	int a, b, area;

	printf("가로 세로의 길이를 각각 입력하세요 : ");
	scanf("%d%d", &a, &b);
	area = a * b;
	printf("넓이 : %d", area);

	
	return 0;
}