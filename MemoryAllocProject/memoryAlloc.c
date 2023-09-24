/* 11주차 실습 5번 : memoryAlloc.c
   작성일 : 2022. 05. 14
   작성자 : 윤서은
   프로그램 설명 : 사용자로부터 생성할 배열의 개수를 입력받아 동적메모리할당으로 배열을 만들고 1부터 사용자가 입력한 숫자 사이의 랜덤 값으로 배열을 채우고 출력한 후 메모리를 해제하는 프로그램
*/

#include <stdio.h>
#include <stdlib.h>

//함수 선언
void fillArray(int* p, int size);
void printArray(int* p, int size);

int main(int argc, char* argv[])
{
	int size; //배열 크기를 나타내는 변수
	int *p = NULL;
	int i;

	printf("사용할 배열 크기 입력 : ");
	scanf_s("%d", &size, 4);//배열 크기 입력 받기 (4byte 할당)

	p = (int *)malloc(size * sizeof(int)); //동적 할당 배열

	fillArray(p, size);
	printArray(p, size);

	free(p);//메모리 해제

	return 0;
}
void fillArray(int* p, int size) {
	int i;

	for (i = 0; i < size; i++) { //i를 증가시키면서
		*(p + i) = rand() % 10 + 1; //1 ~ 10 랜덤으로 값 주기
		//p[i] = i;
	}

}

void printArray(int* p, int size) {
	int i;

	for (i = 0; i < size; i++) { //입력된 수만큼 반복
		printf("[%d] : %d \n",i, *(p + i)); //랜덤 값 출력
	}

}