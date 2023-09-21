/* 6주차 실습 1번 : sum.c
   작성일 : 2022. 04. 04
   작성자 : 윤서은
   프로그램 설명 : for 반복문과 if조건문을 이용해 1부터 사용자가 입력한 숫자까지의 
                   홀수와 짝수의 합(sum 함수이용)을 각각 출력하는 프로그램              
*/
#include <stdio.h>

//함수 선언
int sum(int end, int mode);

int main(void)
{
    int end = 0; // 사용자로부터 입력받을 마지막 값
    int i;
    int total = 0;

    printf("합을 출력할 마지막 값을 입력하세요 : ");
    scanf_s("%d", &end); // 정수 n입력 받기

    printf("1부터 %d까지의 \n", end);

    printf("\t 짝수의 합 : %d\n", sum(end, 2));
    printf("\t 홀수의 합 : %d\n", sum(end, 1));
    printf("\t 총 합 : %d\n", sum(end, 0));
    
    return 0;
}   

int sum(int end, int mode) {

    int total = 0;
    int i;

    if (mode == 2) { //짝수 합 계산
        for (i = 1; i <= end; i++) { // i는 1부터
            if (i % 2 == 0) //짝수일 경우
                total += i;
        }
    }
    else if (mode == 1) { // 홀수 합 계산
        for (i = 1; i <= end; i++) {
            if (i % 2 == 1) //홀수일 경우
                total += i;
        }
    }
    else { // 총 합 계산
        for (i = 1; i <= end; i++)
            total += i;
    }
    return total;
}