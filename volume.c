#define _CRT_SECURE_NO_WARNINGS

/* 4주차 실습 3번 : volume.c
   작성일 : 2022. 03. 23
   작성자 : 윤서은
   프로그램 설명 : 함수를 활용해 원뿔의 높이, 반지름을 입력받아
                   부피를 계산하고 출력하는 프로그램
*/

#include <stdio.h>

double getVolume(int h, int r, double pi);
double printResult(int h, int r, double v);

int main(int argc, char* argv[])
{
    int h, r;
    double v = 0.0;
    double pi = 3.14;

    printf("원뿔의 높이와 반지름을 입력하세요 : ");
    scanf("%d%d", &h, &r);

    v = getVolume(h, r, pi);
    printResult(h, r, v);

    return 0;
}

double getVolume(int h, int r, double pi) {

    return 1.0 / 3.0 * pi * r * r * h;
}

double printResult(int h, int r, double v) {

    printf("높이가 %d, 반지름이 %d 인 원뿔의 부피 : %4.1f", h, r, v);
    return 0;

}
