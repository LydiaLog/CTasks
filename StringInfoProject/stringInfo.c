/* 12주차 실습 4번 : stringInfo.c
   작성일 : 2022. 05. 17
   작성자 : 윤서은
   프로그램 설명 : 키보드로부터 입력받은 임의의 문자열에 대해 문자열의 길이 , 알파벳 , 숫자 , 특수기호의 개수를 출력하는 프로그램
*/


#include<stdio.h>
//함수 선언
void stringInfoPrint(char str[]);

int main(int argc, char* argv[]) {

	char inputString[20]; // 영문의 경우 \0 부분 제외 시 19글자임.(입력받을 변수)

	printf("문자열을 입력하세요 : ");

	gets(inputString); //입력받기(공백포함은 scanf_s로 입력받기 불가능하기 때문에 이 함수 사용)

	printf("%입력 문자열 : %s\n", inputString);
	stringInfoPrint(inputString);

	return 0;
}
void stringInfoPrint(char str[]) {

	int i = 0;
	int len = 0; //문자열 길이를 위한 변수
	int A_cnt = 0; //알파벳개수를 위한 변수
	int N_cnt = 0;//숫자 개수를 위한 변수
	int S_cnt = 0;//특수문자를 위한 변수

	while(str[i] != '\0') {
		len++; //문자열 길이
		if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z') { // ||사용해 대소문자 한 번에 판별
			A_cnt++; // 알파벳 카운트 증가
		}
		else if (str[i] >= '0' && str[i] <= '9') { //숫자 판별
			N_cnt++; //숫자 카운트 증가
		}
		else {//이외의 경우(특수문자인 경우)
			S_cnt++; // 특수문자 카운트 증가
		}
		str++;
	}
	printf("문자열의 길이 : %d\n",len);
	printf("알파벳의 개수 : %d\n", A_cnt);
	printf("숫자의 개수 : %d\n", N_cnt);
	printf("특수문자의 개수 : %d\n", S_cnt);
}
