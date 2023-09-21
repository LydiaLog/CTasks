/* 실습 3 : overflow.c
   작성일 : 2022.03.11
   작성자 : 윤서은
   프로그램 설명 : 오버플로우와 언더플로우 실습
*/
#include <stdio.h>

int main(void)
{
	unsigned char uc = 255 + 1;
	short s = 32767 + 1;
	float min = 1.175E-50;
	float max = 3.403E39;

	printf("%u\n", uc);		//오버플로우 발생
	printf("%d\n", s);		//오버플로우 발생
	printf("%e\n", min);	//언더플로우 발생
	printf("%f\n", max);	//오버플로우 발생
	// 오버플로우나 언더플로우는 일어나지 않아야 함. 의도적 X
	return 0;
}