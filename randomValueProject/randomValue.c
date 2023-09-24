/* 9주차 실습 4번 : randomValue.c
   작성일 : 2022. 04. 29
   작성자 : 윤서은
   프로그램 설명 : 6개의 정수형 배열을 선언하고 1~45 중 랜덤 값을 배열에 저장하여 출력하는 프로그램
				   단, 이미 배열에 있는 값은 저장하지 않는다(중복 X)
*/

#include <stdio.h>
#include <stdlib.h> // 표준 라이브러리
#include <time.h> //시간함수
int main(int agrc, char* argv[]) {

	int lotto[6] = { 0 }; // 정수 6개를 저장할 배열
	int check[46] = { 0 };// 1~45까지 배열
	int i = 0;
	int j = 0;
	int rv = 0; // randomValue

	srand( time(NULL) ); // 시간에 따라 바뀌는 랜덤값

	for (i = 0; i < 6; i++) {
		rv = rand()% 45 + 1; // 1부터 45까지의 랜덤값 
		lotto[i] = rv;

		if (check[rv] == 1) // 중복되는 값이 존재하면
			i--; //빼주기
		else // 그 외의 경우(새로운 값 나옴)
			check[rv] = 1; // 그 위치를 다음에 중복 선택을 하지 않도록 1로 바꿔줌
		
		/*
		for (j = 0; j < i; j++) {//중복 제외를 위한 반복문
			if (rv == lotto[j]) { // 같은 값이 나오면
				i--; // 빼주기
			}
		}*/
	}

	for (i = 0; i < 6; i++) {
		printf("%d \n", lotto[i]);
	}
	return 0;
}