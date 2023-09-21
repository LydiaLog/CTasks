/* 6주차 실습 2번 : pattern.c
   작성일 : 2022. 04. 04
   작성자 : 윤서은
   프로그램 설명 : 높이와 너비를 입력 받아 중첩 반복문을 이용해 패턴을 출력하는 프로그램
*/

#include <stdio.h>

// 함수 선언
void printRect(int height, int width);
void printRightAngledTriangle(int height);
void printlsoscelesTriangle(int height);
void printInvertedTriangle(int height);

int main(void) {

	int height = 0; // 입력받을 높이
	int width = 0; // 입력받을 너비

	printf("도형의 높이 : ");
	scanf_s("%d", &height);
	printf("도형의 너비 : ");
	scanf_s("%d", &width);

	//함수 호출
	printRect(height, width);
	printRightAngledTriangle(height);
	printlsoscelesTriangle(height);
	printInvertedTriangle(height);

	return 0;
}
void printRect(int height, int width) { // 사각형 함수
	printf("\n사각형 출력 \n");
	for (int i = 0; i < height; i++) { //height 줄 
		for (int j = 0; j < width; j++) 
			printf("*");// 한 줄에 width개만큼 *출력
		printf("\n");
	}
}
void printRightAngledTriangle(int height) { // 직각삼각형 함수
	printf("\n직각삼각형 출력 \n");
	for (int i = 0; i < height; i++) {//height 줄 
		for (int j = 0; j < i + 1; j++) 
			printf("*");// 한 줄에 i + 1개의 * 출력
		printf("\n");
	}
}
void printlsoscelesTriangle(int height) { // 이등변삼각형 함수
	int i, j;

	printf("\n이등변삼각형 출력 \n");
	for (i = 0; i < height; i++) { //height 줄 
		for (j = 0; j < height - i - 1; j++)
			printf(" ");//한 줄 왼쪽에 height - i만큼 공백
	
		for (j = 0; j < 2 * i + 1; j++)
			printf("*"); // 한 줄에 2i+1개의 * 출력
		printf("\n");
	}
}
void printInvertedTriangle(int height) { //역이등변삼각형 함수
	int i, j;

	printf("\n역삼각형 출력 \n");
	for (i = height - 1; i >= 0; i--){ //height 줄 
		for (j = 0; j < height - i - 1; j++)
			printf(" "); //한 줄 왼쪽에 height - i만큼 공백
			for (j = 0; j < 2 * i + 1; j++) 
				printf("*");// 한 줄에 2i+1개의 * 출력
			printf("\n");
			
	 }

}