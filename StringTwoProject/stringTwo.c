/* 12주차 실습 3번 : stringTwo.c
   작성일 : 2022. 05. 17
   작성자 : 윤서은
   프로그램 설명 : 문자열을 입력 받고 입력받은 문자열을 소문자는 대문자로 대문자는 소문자로 변환, 공백의 길이, 거꾸로 출력한 결과를 출력하는 프로그램
*/

#include<stdio.h>
//함수 선언
void toUpperLower(char* str);// 입력된 문자열을 모두 대문자로 변경하는 함수
int spaceCount(char* str); //공백의 개수를 계산하는 함수
void reversePrint(char* str); //문자열을 거꾸로 출력하는 함수

int main(int argc, char* argv[]) {

	char inputString[20]; // 영문의 경우 \0 부분 제외 시 19글자임.(입력받을 변수)

	printf("문자열을 입력하세요 : ");

	gets(inputString); //입력받기(공백포함은 scanf_s로 입력받기 불가능하기 때문에 이 함수 사용)

	printf("%입력 문자열 : %s\n", inputString);
	toUpperLower(inputString);
	printf("%변경된 문자열 : %s\n", inputString);
	printf("공백의 개수 : %d\n", spaceCount(inputString));
	printf("거꾸로 출력한 문자열 : ");
	reversePrint(inputString);
	return 0;
}
void toUpperLower(char* str) {

// 몇번 반복하는지 명확하게 주어지지 않아 for대신 while을 사용하는 것이 훨씬 효율적이다.
	while (*str != '\0') { //조건 확인
		if(islower(*str)) //islower 함수 사용하는 방법
			*str -= 32;
		else if (isupper(*str)) //isupper 함수 사용하는 방법
			*str += 32;
		str++;//str 증가
	}
}
int spaceCount(char* str) {
	int count = 0;

	while (*str != '\0') { 
		if (isspace(*str))//공백일 경우
			count++; //count값 증가
		str++;
	}
	return count; //while문 다 돌고 나면 count값에는 공백의 개수가 반환
}
void reversePrint(char* str) {
	int len = 0;
	int i;
	len = strlen(str); //문자열의 길이

	for (i = len - 1; i >= 0; i--) //길이를 하나씩 빼면서 출력
		printf("%c", str[i]);
}