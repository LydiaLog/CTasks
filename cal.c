#define _CRT_SECURE_NO_WARNINGS

/* 3주차 실습 2번 : cal.c
   작성일 : 2022. 03. 16
   작성자 : 윤서은
   프로그램 설명 : 변수에 값을 저장하고 수식을 출력하는 프로그램
*/

#include <stdio.h>

int main(int argc, char* argv[])
{
	int x = 2;
	int y = 3;
	double z = 2.4;
	double result = 0.0;

	/*
	a)
	result = x++ + y++ + z;
	printf("x값 %d, y값 %d, z값 %4.1f 일 때 수식 x++ + y++ + z의 결과 %4.1f", x, y, z, result);
	
	b)
	result = ++x + y / 2 * 2 - (int)z;
	printf("x값 % d, y값 % d, z값 %4.1f 일 때 수식 ++x + y / 2 * 2 - (int)z 의 결과 %4.1f", x, y, z, result);
	
	c)
	result = (int)z - (x + (int)z) % 2 + 4.0;
	printf("x값 % d, y값 % d, z값 %4.1f 일 때 수식 (int)z - ( x + (int)z ) % 2 + 4.0 의 결과 %4.1f", x, y, z, result);
	
	*/

	result = x * 6 - 2 * (3 + z) + y;
	printf("x값 %d, y값 %d, z값 %4.1f 일 때 수식 x * 6 - 2 * (3 + z) + y의 결과 %4.1f", x, y, z, result);

	
	return 0;
}