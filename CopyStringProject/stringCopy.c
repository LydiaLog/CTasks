/* 12주차 실습 5번 : stringCopy.c
   작성일 : 2022. 05. 17
   작성자 : 윤서은
   프로그램 설명 :문자열 str을 dest 배열에 복사하는 프로그램
*/

#include<stdio.h>
//함수 선언


int main(int argc, char* argv[]) {

	char* str = "copy string"; //복사할 문자열 상수
	char dest[50];//복사 받는 문자열을 배열이어야 함
	char* start = str;

	int i = 0;

	while (*str != '\0') {
		dest[i++] = *str; //포인터 사용해서 dest[i]형식으로 사용 불가
		str++; //시작 위치 바뀜
	}
	dest[i] = '\0'; //문자열 복사할 때 '\0'도 복사되어야 %s 문자열 취급이 가능하다는 것 유의하기
	str = start; //위의 반복문에서 변경된 str값이 아닌 원래의 str 값
	printf("원본 : %s \n", str);
	printf("사본 : %s \n", dest);
	return 0;
}