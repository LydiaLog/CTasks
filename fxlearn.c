/* 4주차 실습 1번 : fxlearn.c
   작성일 : 2022. 03. 23
   작성자 : 윤서은
   프로그램 설명 : 함수의 선언,호출,정의 방법을 연습하는 프로그램
*/

#include <stdio.h>

int SumTwo(int a, int b); //함수 선언
int main(void)
{
	int x = 10, y = 5;
	int value;

	value = SumTwo(x, y); //함수 호출
	printf("두 수의 합은 : %d\n", value);
	return 0;
}
int SumTwo(int a, int b) //함수 정의
{
	int result;

	result = a + b;
	return result;
}