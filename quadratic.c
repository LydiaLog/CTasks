#define _CRT_SECURE_NO_WARNINGS

/* 3주차 실습 6번 : quadratic.c
   작성일 : 2022. 03. 22
   작성자 : 윤서은
   프로그램 설명 : 2차 방정식의 계수인 실수 a, b, c를 입력받아
				   2차 방정식의 근을 계산하여 출력하는 프로그램
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[])
{
	int a, b, c;
	float x1 = 0.0 ,x2 = 0.0;

	a = b = c = 0.0;

	printf("이차 방정식의 계수 세 개를 실수 형태로 입력하세요 : ");
	scanf("%f%f%f", &a, &b, &c);

	x1 = ((-b + (sqrt(b * b) - 4 * a * c))) / (2 * a);
	x2 = ((-b - (sqrt(b * b) - 4 * a * c))) / (2 * a);

	printf("첫 번째 근 %.2f 두 번째 근 %.2f", x1, x2);



	return 0;
}