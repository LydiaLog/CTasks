/* 실습 4 : boxVolume.c
   작성일 : 2022.03.11
   작성자 : 윤서은
   프로그램 설명 : 박스의 부피를 구하는 프로그램
*/

#include <stdio.h>

int main() {

	int width = 2;
	int height = 3;
	int length = 2;

	/* int volume = 0;
	   volume = width * height * length;
	   printf("너비 %d 높이 %d 길이 %d 의 부피는 %d입니다 \n", width, height, length, volume);
	*/

	printf("너비 %d 높이 %d 길이 %d 의 부피는 %d입니다 \n", width, height, length, width * height * length);

	return 0;
}