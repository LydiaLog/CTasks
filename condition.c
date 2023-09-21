#define _CRT_SECURE_NO_WARNINGS

/* 3주차 실습 8번 : condition.c
   작성일 : 2022. 03. 16
   작성자 : 윤서은
   프로그램 설명 : 주어진 조건을 관계연산, 논리연산으로 결과를
                   출력하는 프로그램
*/

#include <stdio.h>


int main(int argc, char* argv[])
{
    char married = 'y';
    printf("미혼인가 %d\n", married == 'y');

    int age = 22;
    char gender = 'f';
    printf("나이가 19세 이상이고 남자인가 %d\n", age >= 19 && gender == 'm');

    int c = 100;
    int e = 80;
    int m = 90;
    int total = c + e + m;
    int ave = total / 3;
    printf("컴퓨터와 영어 그리고 수학 모두가 90점 이상인가 %d\n", c >= 90 && e >= 90 && m >= 90);
    printf("총점이 200점 이상이거나 평균이 60점 이상인가 %d\n", total >= 200 || ave >= 60);
    
    int score = 90;
    int ab = 2;
    printf("점수가 60점 미만이거나 결석횟수가 4번 이상인가 %d\n", score < 60 || ab >= 4);

    int year = 2022;
    printf("현재의 년도가 윤년인가 %d\n", (year % 4) == 0 && (year % 100) != 0 || (year % 400) == 0);

    int num ;
    printf("숫자를 입력하세요 : ");
    scanf("%d", &num);
    printf("입력된 숫자 %d가 짝수인가 %d\n", num, num % 2 == 0);
    printf("입력된 숫자가 3과 5의 공배수인가 %d\n", num % 3 == 0 && num % 5 == 0);

    return 0;
}