/* 11주차 실습 4번 : twoDimPrintArray.c
   작성일 : 2022. 05. 14
   작성자 : 윤서은
   프로그램 설명 : 2차원 배열을 선언하고 2차원 배열을 함수로 전달해 출력하는 프로그램
*/


#include <stdio.h>

void printArray(int(*ary)[4]);
//void printArray(int ary[][4]);

int main()
{
	int array[][4] = { {1,2,3,4},{5,6,7,8} };

	printArray(array); //배열은 2차원 배열도 이름으로 전달

	return 0;
}
//방법 1(주소연산)
void printArray(int(*ary)[4]) {
	int i, j; // 2개 변수 필요
	for (i = 0; i < 2; i++) { //2차원배열
		for (j = 0; j < 4; j++) {// 4개 원소
			printf("%d ", *(*ary + j));
		}
		printf("\n");
		ary++;
	}
}
//방법 2(인덱스)
/*void printArray(int ary[][4]) {
	int i, j; // 2개 변수 필요

	for (i = 0; i < 2; i++) { //2차원배열
		for (j = 0; j < 4; j++) {// 4개 원소
			printf("%d ", ary[i][j]);
		}
		printf("\n");
	}
}
*/