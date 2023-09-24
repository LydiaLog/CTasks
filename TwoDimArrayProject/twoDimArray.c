/* 9주차 실습 6번 : twoDimArray.c
   작성일 : 2022. 04. 29
   작성자 : 윤서은
   프로그램 설명 : 주어진 2차원 배열을 생성하고 배열의 위치와 값을 printArray 함수를 이용해 출력하는 프로그램
*/

#include <stdio.h>
//함수 선언
void printArray(int arr[][8]); // 이차원 배열은 1차원 원소수 생략 불가능

int main(int agrc, char* argv[]) {

    int twoDim[2][8] = { {1,3,5,7,9,11,13,15},{2,4,6,8,10,12,14,16} }; // 2차원 배열 선언과 동시에 초기화

    printArray(twoDim);

    return 0;
}
void printArray(int arr[][8]) {
	int i, j;

	//원소 단위로 접근
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 8; j++) {
			printf("[%d][%d] = %d ", i, j, arr[i][j]);
		}
		printf("\n");
	}
		
}