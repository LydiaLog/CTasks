#define _CRT_SECURE_NO_WARNINGS

/* 10주차 실습 5번 : doublePointer.c
   작성일 : 2022. 05. 04
   작성자 : 윤서은
   프로그램 설명 : 직접참조(변수),간접참조(포인터),이중간접참조(이중포인터)를 각각 사용하여 키보드로부터 정수를 입력받고 출력하는 프로그램
*/

#include <stdio.h>

int main()
{
	int value; //사용자로부터 입력받을 정수
	int *p = &value;
	int **q = &p;

	printf("value의 값을 입력하세요 : ");
	scanf("%d", &value);

	printf("value의 주소 : %d \n", &value);
	printf("p의 주소 : %d \n",&p);
	printf("q의 주소 : %d \n",&q);

	printf("value = %d \n", value);// 직접참조
	printf("p = %d\n", *p); // 간접참조
	printf("q = %d \n", **q); // 이중간접참조

	return 0;
}