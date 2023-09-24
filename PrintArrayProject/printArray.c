/* 11주차 실습 3번 : printArray.c
   작성일 : 2022. 05. 14
   작성자 : 윤서은
   프로그램 설명 : 1차원 배열을 다음과 같이 선언하고 배열에 값이 –1이 나타날 때 까지 while 문으로 포인터를 증가시키면서 배열을 출력하는 프로그램
*/

#include <stdio.h>

//함수 선언

void printArray(int* p);

int main()
{
	int arr[10] = { 1 , 2 , 3 , 4 , 5 , -1 , 7 , 8 , 9 , 10 }; //주어진 1차원 배열 선언
	int *p = arr;

	printArray(p);

	return 0;
}

void printArray(int* p) {

		while (*p != -1) { // *p의 값이 -1이 아닐때까지
			printf("%d \n", * p++); //포인터 증가시켜 출력
		}

}