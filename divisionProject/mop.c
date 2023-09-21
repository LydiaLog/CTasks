#define _CRT_SECURE_NO_WARNINGS // 입력 받을 때 이 문장 + scanf 또는 scanf_s 사용

/* 5주차 실습 2번 : mop.c
   작성일 : 2022. 03. 29
   작성자 : 윤서은
   프로그램 설명 : 입력받은 값이 음수인지 양수인지 0인지
                   구분하는 프로그램
*/

#include <stdio.h>

int main(void)
{
    int n; //사용자로부터 입력 받을 변수 n
    printf("값을 입력하세요 : ");
    scanf("%d", &n); //정수 n의 값을 입력 받기

    if (n < 0)
        printf("입력한 값 %d은 음수입니다.", n); //n이 0보다 작은 경우
    else if (n == 0)
        printf("입력한 값 %d은 0입니다.", n); //n이 0인 경우
    else
        printf("입력한 값 %d은 양수입니다.", n);//그 외의 경우(n이 0보다 큰 경우)

    return 0;
}