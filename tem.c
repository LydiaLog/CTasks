#define _CRT_SECURE_NO_WARNINGS

/* 3주차 실습 4번 : tem.c
   작성일 : 2022. 03. 16
   작성자 : 윤서은
   프로그램 설명 : 섭씨온도를 입력받아 화씨온도로 변경하여 
                   출력하는 프로그램
*/

#include <stdio.h>

int main(int argc, char* argv[])
{
    double C, F;

    printf("섭씨온도를 입력하세요 : ");
    scanf("%lf", &C);

    F = 32 + (C * 180.0 / 100.0);
    printf("섭씨온도 %2.2lf를 화씨온도로 변경한 값 : %2.2lf", C, F);

    return 0;
}