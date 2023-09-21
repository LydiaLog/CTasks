#define _CRT_SECURE_NO_WARNINGS

/* 5주차 실습 1번 : oddeven.c
   작성일 : 2022. 03. 29
   작성자 : 윤서은
   프로그램 설명 : 입력받은 정수의 값이 홀수인지 짝수인지
                   구분하는 프로그램
*/

#include <stdio.h>

int main(void)
{
    int n; // 사용자로부터 입력 받을 정수 n
    printf("정수 값을 입력하세요 : ");
    scanf("%d", &n); // 정수 n 입력 받기

    if (n % 2 == 0) // n이 짝수일 경우
        printf("입력한 값 %d는 짝수입니다.", n);
    else // 그 외의 경우(홀수)
        printf("입력한 값 %d는 홀수입니다.", n);

    return 0;
}