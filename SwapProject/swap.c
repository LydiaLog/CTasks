/* 10주차 실습 4번 : swap.c
   작성일 : 2022. 05. 04
   작성자 : 윤서은
   프로그램 설명 : main 함수에서 swap 함수에 두 변수의 주소를 전달하여 swap 함수를 통해 두 변수의 값을 바꾸는 프로그램
*/

#include <stdio.h>
//함수 선언
void swap(int*, int*);

int main() 
{	
	int value1 = 10; // 첫 번째 정수형 변수 선언과 동시에 초기화
	int value2 = 20; // 두 번째 정수형 변수 선언과 동시에 초기화

	printf("교환 전 value1 값 : %d, value2 값 : %d \n", &value1, &value2);
	swap(&value1, &value2); 
	printf("교환 후 value1 값 : %d, value2 값 : %d \n", &value1, &value2);

	return 0;
}

void swap(int *v1, int *v2) { // 두 변수의 값을 바꿔주는 함수
	int temp; // 값 옮길 때 필요한 새 변수

	temp = *v1; // temp에 *v1 저장
	*v1 = *v2; // *v1에 *v2 저장
	*v2 = temp; // *v2에 temp 저장

}