/* 6주차 실습 6번 : factorial.c
   작성일 : 2022. 04. 05
   작성자 : 윤서은
   프로그램 설명 : 사용자로부터 입력받은 숫자의 팩토리얼 값을 출력하는 프로그램
*/

#include <stdio.h>

int main(void) {

	int n = 0; //입력받을 정수
	long long int facValue = 1L; //팩토리얼 값
	int i = 0;

	printf("팩토리얼 n값을 입력하시오 : ");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++) {
		facValue *= i; // facValue = facValue * i랑 같음
	}

	printf("%d! = %lld", n, facValue);

	return 0;
}