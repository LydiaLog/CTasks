#define _CRT_SECURE_NO_WARNINGS

/* 3주차 실습 3번 : volume.c
   작성일 : 2022. 03. 16
   작성자 : 윤서은
   프로그램 설명 : 원뿔의 높이, 반지름을 입력받아 부피를 계산하여
                   출력하는 프로그램
*/

#include <stdio.h>

int main(int argc, char* argv[])
{
    int h, r;
    double v = 0.0;
    double pi = 3.14;

    printf("원뿔의 높이와 반지름을 입력하세요 : ");
    scanf("%d%d", &h, &r);

    v = 1.0 / 3.0 * pi * r * r * h;

    printf("높이가 %d, 반지름이 %d 인 원뿔의 부피 : %4.1f", h, r, v);

    return 0;
}