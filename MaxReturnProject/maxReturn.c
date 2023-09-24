/* 11주차 실습 1번 : maxReturn.c
   작성일 : 2022. 05. 14
   작성자 : 윤서은
   프로그램 설명 : 1차원 배열 중 가장 큰 값의 메모리 주소를 반환하는 find_max함수를 이용해 가장 큰 값을 출력하는 프로그램
*/


#include <stdio.h>

//함수 선언

void find_max(int* arr, int* max);

int main()
{
	int arr[10] = { 12, 22, 4, 54, 1, 19, 44, 29, 37 }; //주어진 1차원 배열 선언
	int max; //최대값

	find_max(arr, &max);
	printf("다음 배열의 값 중 가장 큰 값은 %d 입니다.", max);

	return 0;
}

void find_max(int* arr, int* max)
{
	*max = arr[0];   // 최대값에 일단 배열 첫번째 값을 넣고

	for (int i = 1; i < 10; i++) //배열의 크기만큼 반복
	{
		// 배열 i 번째 값이 최대값 보다 크면 최대값에 배열 i 번째 값 할당 
		if (arr[i] > *max) {
			*max = arr[i];
		}
	}
}