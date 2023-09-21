/* 6주차 실습 4번 : average.c
   작성일 : 2022. 04. 05
   작성자 : 윤서은
   프로그램 설명 : for문을 사용해 n값을 입력받아 주어진 수식을 계산하는 프로그램
*/

#include <stdio.h>

//함수 선언
int calc(int n);

int main(void)
{
	int n = 0; //반복할 횟수를 나타내는 정수값
	int result = 0;

	printf("반복할 횟수를 입력하세요 : ");
	scanf_s("%d", &n);

	//함수 호출
	result = calc(n);

	printf("주어진 식의 결과 : %d", result);

	return 0;
}
int calc(int n) {
	int result = 0;
	int i = 0;

	for (i = 1; i <= n; i++) { //i는 1부터
		result += (i * i + 1); 
	}
	return result;
}