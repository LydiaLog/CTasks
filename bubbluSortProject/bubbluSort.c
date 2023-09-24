/* 9주차 실습 5번 : bubbleSort.c
   작성일 : 2022. 04. 29
   작성자 : 윤서은
   프로그램 설명 : 1차원 배열을 버블정렬하고 출력하는 프로그램
*/

#include <stdio.h>
//함수 선언
void printArray(int arr[]);
void sort(int arr[]); // 정렬만 하면 되니까 리턴값 불필요(void)

int main(int agrc, char* argv[]) {
	int arr[] = { 1,9,2,8,3,7,4,6,5,0 };

	printf("정렬 전 \n");
	printArray(arr);

	sort(arr);

	printf("\n 정렬 후 \n");
	printArray(arr);

	return 0;
}
void sort(int arr[]) { // 버블정렬은 이웃한 두 개의 정수 비교
	int i, j; // 기본적으로 2개의 변수 필요
	int temp;

	for (i = 0; i < 10; i++) {
		for(j = 0; j < 10 - 1; j++) // 이웃한 두 개 정수 비교하므로 마지막 - 1까지 비교
			if (arr[j] < arr[j + 1]) { // 앞의 배열의 뒤의 배열보다 클 경우
				// 두 값을 바꿔준다 
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
	}
}
void printArray(int arr[]) {
	int i = 0;
	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);
}