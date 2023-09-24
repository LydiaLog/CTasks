/* 12주차 실습 2번 : String.c
   작성일 : 2022. 05. 17
   작성자 : 윤서은
   프로그램 설명 : 문자열을 입력 받고 입력받은 문자열을 모두 대문자로 변경한 결과와 문자열의 길이를 계산해서 출력하는 프로그램
*/

#include<stdio.h>
//함수 선언
void toUpper(char* str);// 입력된 문자열을 모두 대문자로 변경하는 함수
int length(char* str); //문자열의 길이를 계산하는 함수

int main(int argc, char* argv[]) {

	char inputString[20]; // 영문의 경우 \0 부분 제외 시 19글자임.(입력받을 변수)

	printf("문자열을 입력하세요 : ");

	scanf_s("%s", inputString, 20); // 배열 사이즈 꼭 적어줘야 함! 주소값이므로 &를 붙이지X
	//scanf_s("%s", &inputString[0]); 로 적어도 가능

	printf("입력 문자열 : %s\n", inputString);
	toUpper(inputString);
	printf("변경된 문자열 : %s\n", inputString);
	printf("문자열의 길이 : %d\n", length(inputString));

	return 0;
}

void toUpper(char* str) {
	/*
	int i = 0;// 제어변수
	for(i = 0; str[i] != '\0'; i++) {//문자열의 i번째가 \0이 아닐때까지 i를 증가함.
		if(islower(str[i])) //islower 함수 사용하는 방법
			str[i] -= 32;
		if (str[i] >= 'a' && str[i] <= 'z') //소문자인 경우
			str[i] -= 32; //소문자가 대문자보다 크므로 32의 값을 빼주면 소문자일 경우 대문자로 변환이 된다
			소문자로 변경하는 방법
			if (str[i] >= 'A' && str[i] <= 'Z') 
			str[i] += 32;
			}
			*/

	//반복문은 몇번 반복하는지 명확하게 주어지지 않아 for대신 while을 사용하는 것이 훨씬 효율적이다.
	while(*str != '\0'){ //조건 확인
		if (islower(*str)) //islower 함수 사용하는 방법
			*str -= 32;
		str++;//str 증가
	}
}

int length(char* str) {
	int len = 0;

	while (*str++ != '\0') { //주어진 조건일 경우
		len++; //len 증가
	}
	return len; // 리턴을 해줘야 길이 나옴
}