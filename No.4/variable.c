/* 실습 4 : varlable.c
   작성일 : 2022.03.11
   작성자 : 윤서은
   프로그램 설명 : 지정된 값을 적절한 변수에 저장하고 출력하는 프로그램
*/

#include <stdio.h>

int main() {
	 
	short age = 128; // short int랑 동일
	unsigned int salary = 2500000000; // unsigned 부호 X
	float pi = 3.14f;
	char grade = 2; // int와 동일 (char도 정수임)
	char credit = 'A';

	printf("age = %hd", age); // 정수라 %d도 가능
	printf("salary = %ud", salary); //unsigned -> %ud
	printf("pi = %fd", pi);
	printf("grade = %d", grade);
	printf("credit = %c", credit);

	return 0;
}