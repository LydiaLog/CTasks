/* 12주차 실습 6번 : stringCompare.c
   작성일 : 2022. 05. 17
   작성자 : 윤서은
   프로그램 설명 :두 개의 문자열을 입력 받아 두 문자열이 같은지 확인하는 프로그램
*/

#include<stdio.h>
//함수 선언
int comp(char* str1, char* str2);

int main(int argc, char* argv[]) {

	char str1[20]; //사용자로부터 입력받을 첫 번째 문자열 변수
	char str2[20]; //사용자로부터 입력받을 두 번째 문자열 변수

	printf("첫 번째 문자열을 입력하세요 : ");
	scanf_s("%s", str1, 20);

	printf("두 번째 문자열을 입력하세요 : ");
	scanf_s("%s", str2, 20);

	if (comp(str1, str2)) {
		printf("두 문자열은 같습니다.");
	}
	else {
		printf("두 문자열은 다릅니다.");
	}
	
	return 0;
}

int comp(char* str1, char* str2) {

	while (*str1 != '\0') {
		if (*str1 != *str2) //두 문자열이 다르면
			return 0; //0을 반환
		str1++;
		str2++;
	}
	return 1;// 같으면 1을 반환
}