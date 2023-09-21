#define _CRT_SECURE_NO_WARNINGS

/* 4주차 실습 2번 : average.c
   작성일 : 2022. 03. 23
   작성자 : 윤서은
   프로그램 설명 : getAverage(평균 계산 함수), printResult(출력 함수)를
                   이용해 실수를 입력받아 계산하는 프로그램
*/

#include <stdio.h>

double getAverage(double num1, double num2);
double printResult(double num1, double num2, double result);

int main(void)
{
    double num1 = 0.0;
    double num2 = 0.0;
    double result = 0.0;

    printf("두 실수형을 입력하세요 : ");
    scanf("%lf%lf", &num1, &num2);

    result = getAverage(num1, num2);

    printResult(num1, num2, result);

    return 0;
}

double getAverage(double num1, double num2) {

    return (num1 + num2) / 2.0;

}
double printResult(double num1, double num2, double result) {

    printf("두 수 %.1f, %.1f의 평균값 : %.1f", num1, num2, result);

    return 0;

}