#define _CRT_SECURE_NO_WARNINGS

/* 4주차 실습 4번 : pay.c
   작성일 : 2022. 03. 23
   작성자 : 윤서은
   프로그램 설명 : 함수를 이용해 급여를 입력받고
                   소득세 (급여의 10%) => getIncomeTax,
                   주민세 (소득세의 10%) => getLocalinhabitantsTax,
                   보험료 (급여의 5.89%) => getInsurance,
                   급여액 (급여 -(소득세 + 주민세 + 보험료)) => getPay 을
                   계산하고 출력하는 프로그램
*/

#include <stdio.h>

int main(int argc, char* argv[])
{
    int pay;
    int Tpay = 0;
    int Lpay = 0;
    int Ipay = 0;
    int Gpay = 0;

    printf("월 급여를 입력하세요 : ");
    scanf("%d", &pay);


    Tpay = getIncomeTax(pay);
    Lpay = getLocalinhabitantsTax(Tpay);
    Ipay = getInsurance(pay);
    Gpay = getPay(pay, Tpay, Lpay, Ipay);

    printResult(pay, Tpay, Lpay, Ipay, Gpay);

    return 0;
}

int getIncomeTax(int pay) {

    return (int)(pay * 0.1);

}

int getLocalinhabitantsTax(int Tpay) {

    return (int)(Tpay * 0.1);
}

int getInsurance(int pay) {

    return (int)(pay * 0.0589);

}

int getPay(int pay, int Tpay, int Lpay, int Ipay) {

    return pay - (Tpay + Lpay + Ipay);

}

int printResult(int pay, int Tpay, int Lpay, int Ipay, int Gpay) {

    printf("  >> 총 급여(+) : %d (원) \n", pay);
    printf("  >> 소득세(-) : %d (원) \n", Tpay);
    printf("  >> 주민세(-) : %d (원) \n", Lpay);
    printf("  >> 보험료(-) : %d (원) \n", Ipay);
    printf("  >> 지급액 : %d (원)", Gpay);

}
