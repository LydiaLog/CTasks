/* 6주차 실습 7번 : fibonacci.c
   작성일 : 2022. 04. 05
   작성자 : 윤서은
   프로그램 설명 : 사용자로부터 입력받은 숫자까지의 피보나치 수열을 출력하는 프로그램
*/

#include <stdio.h>

int main(void) {

	int first = 0; //첫번째 항
	int second = 1; //두번째 항
	int next = 0; //다음 항
	int i = 0;
	int last = 0;// 입력 받을 마지막 항
	int sum = 1; // 수열 합

	printf("피보나치 수열의 마지막 항을 입력하시오 : ");
	scanf_s("%d", &last);

	if (last == 0) { //마지막 항이 0일 경우
		printf("피보나치 수열 : %d", 0);
		printf("수열 합계 : %d", 0);
	}
	else if (last == 1) { // 마지막 항이 1일 경우
		printf("피보나치 수열 %d, %d", 0, 1);
		printf("피보나치 수열 %d", 1);
	}
	else { // 그 외의 경우
		printf("피보나치 수열 %d, %d", 0, 1);

		for (i = 2; i < last; i++) {
			next = first + second;
			if(i == last - 1)
				printf("%d, ", next);
			else
				printf("%d, ", next);
			first = second;
			second = next;
			sum += next; // sum = sum + next랑 같음
		}
		printf("\n수열 합계 : %d", sum);
	}
	return 0;
}
