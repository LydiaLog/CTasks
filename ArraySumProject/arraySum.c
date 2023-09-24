/* 11주차 실습 2번 : arraySum.c
   작성일 : 2022. 05. 14
   작성자 : 윤서은
   프로그램 설명 : 1차원 배열을 선언하고 배열의 합이 음수인지 양수인지 0인지 판별하는 함수를 이용해 결과를 출력하는 프로그램
*/

#include <stdio.h>

//함수 선언

int sumArray(int* arr, int* sum);
void printArray(const int* arr, int size);

int main()
{
	int arr[10] = { 1, -1, -1, 1, -1, 1, -1, 0, -1, 1 }; //주어진 1차원 배열 선언
	int sum = 0;
	int size = 0;

	sum = sumArray(arr, &sum);
	printArray(arr, sum);

	return 0;
}
int sumArray(int* arr, int* sum) {

		int i;

	for (i = 0; i < 10; i++) { //배열크기만큼 반복하며 수 증가시키기
		sum += *(arr + i); //배열 값들 더해서 sum에 누적

		if (sum > 0) { //배열의 합이 양수인 경우
			return 1; // 1을 리턴
		}
		else if (sum < 0) { // 배열의 합이 음수인 경우
			return -1; // -1을 리턴
		}
		else { // (sum == 0) 배열의 합이 0인 경우
			return 0; //0을 리턴
		}
	}
		return *sum;
}

void printArray(const int* arr, int size) {

	int i = 0;

	for (i = 0; i < 10; i++) { //배열의 크기(10)만큼 반복(수 증가시키면서)
		printf("%d, ", arr[i]); // 배열 값 나열
	}
	printf("합은 %d 이고\n", arr[size]); //배열의 합 출력

		if (arr[size] > 0){ //배열의 합이 0보다 큰 경우
			printf("배열의 합은 양수입니다"); 
		}
		else if (arr[size] < 0) { // 배열의 합이 0보다 작은 경우
			printf("배열의 합은 음수입니다");
		}
		else {// (arr[size] == 0) 배열의 합이 0인 경우
			printf("배열의 합은 0입니다");
		}
}