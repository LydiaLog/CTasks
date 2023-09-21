#define _CRT_SECURE_NO_WARNINGS

/* 3주차 실습 9번 : pay.c
   작성일 : 2022. 03. 16	
   작성자 : 윤서은
   프로그램 설명 : 급여를 입력받아
                   소득세 (급여의 10%), 주민세 (소득세의 10%),
                   보험료 (급여의 5.89%), 급여액 (급여 -(소득세 + 주민세 + 보험료))을
                   계산하고 출력하는 프로그램
*/

#include <stdio.h>

int main(int argc, char* argv[])
{
    int pay;
    printf("월 급여를 입력하세요 : ");
    scanf("%d", &pay);
    printf("  >> 총 급여(+) : %d (원) \n", pay);
     
    int income = pay * 0.1;
    printf("  >> 소득세(-) : %d (원) \n", income);

    int residence = income * 0.1;
    printf("  >> 주민세(-) : %d (원) \n", residence);

    int premium = pay * 0.0589;
    printf("  >> 보험료(-) : %d (원) \n", premium);

    int total = pay - (income + residence + premium);
    printf("  >> 지급액 : %d (원)", total);


    return 0;
}