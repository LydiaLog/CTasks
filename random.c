#define _CRT_SECURE_NO_WARNINGS

/* 4주차 실습 5번 : random.c
   작성일 : 2022. 03. 23
   작성자 : 윤서은
   프로그램 설명 : 정수를 입력받아(n) 1 ~ n 중에서
                   getRandom 함수를 이용해 랜덤값을 출력하는 프로그램
*/

#include <stdio.h>
#include <stdlib.h> // 랜덤함수 사용

int main(void)
{
    int n = 0;
    int r = 0;
    printf("정수 범위를 결정하세요 : ");
    scanf("%d", &n);

    r = getRandom(n);

    printf("입력된 범위 중 결정된 랜덤값은 %d 입니다.", r);

    return 0;

}

int getRandom(int n) {

    return rand() % n + 1;

}


/*
    0 ~ 11   rand() % 12
    0 ~ 100  rand() % 101
    1 ~ 100  rand() % 100 + 1
    20 ~ 30  rand() % 11 + 20
    1 ~ 3    rand() % 3 + 1
*/