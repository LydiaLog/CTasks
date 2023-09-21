#define _CRT_SECURE_NO_WARNINGS

/* 5주차 실습 6번 : menu.c
   작성일 : 2022. 03. 29
   작성자 : 윤서은
   프로그램 설명 : 두 개의 숫자를 입력받아 가장 작은 수, 가장 큰 수, 합계 또는 평균 값 중 하나를 선택하여 계산하는 메뉴기반 프로그램
*/

#include <stdio.h>

int main(void)
{
	int a = 0; //첫 번째 수
	int b = 0; // 두 번째 수
	int menu = 0; // 메뉴 선택

	printf("정수 두 개를 각각 입력하세요 : ");
	scanf("%d%d", &a, &b); // 정수 a, b값 각각 입력 받기

	printf("메뉴\n");
	printf(" 1. 작은 수\n 2. 큰 수\n 3. 합계\n 4. 평균\n 5. 종료");
	printf("메뉴\n");

	printf("메뉴를 선택하세요 : ");
	scanf("%d", &menu); // 정수 menu값 입력 받기

	switch (menu) {
	case 1:
		printf("결과 : %d", a < b ? a : b); //1번(작은 수)의 경우 a가 b보다 작으면 a를 아닌 경우에는 b를 출력
		break;
	case 2:
		if (a > b) // 2번(큰 수) a가 b보다 큰 경우
			printf("결과 : %d", a); //맞으면 a
		else
			printf("결과 : %d", b); //아니면 b 출력
		break;
		// case 1과 동일한 형태의 조건문 사용 가능
	case 3:
		printf("결과 : %d", a + b); //3번(합계)의 경우 a + b의 값 출력
		break;
	case 4:
		printf("결과 : %.2f", (a + b) / 2.0); //4번(평균)의 경우 a와 b를 더해 2로 나누기
		break;
	case 5: //5번(종료) 0을 반환해주기
		return 0;
	}

	return 0;
}