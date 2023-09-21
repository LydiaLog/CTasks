/* 5주차 실습 5번 : bmi.c
   작성일 : 2022. 03. 29
   작성자 : 윤서은
   프로그램 설명 : 키와 몸무게를 입력받아 표준체중을 계산한 후
                   비만 정도에 따라 비만 여부를 출력하는 프로그램
*/


#include <stdio.h>

//함수 선언
double calStan(double h);
double calBmi(double w, double s);
void printResult(double bmi);

int main(int argc, char* argv[])
{
    double height = 0.0; // 키
    double weight = 0.0; // 몸무게
    double stanweight = 0.0; // 표준체중
    double bmi = 0.0; //비만지수

    printf("키를 입력하세요 : ");
    scanf_s("%lf", &height); // 키 실수 값으로 입력 받기
    printf("몸무게를 입력하세요 : ");
    scanf_s("%lf", &weight); // 몸무게 실수 값으로 입력 받기

    stanweight = calStan(height);
    bmi = calBmi(weight, stanweight);

    printResult(bmi);

    return 0;
}

double calStan(double h) {  //h는 키
    return (h - 100) * 0.9;
}

double calBmi(double w, double s) { //w는 몸무게, s는 표준체중
    double bmi = 0.0; // 다른 곳에서 쓰인 bmi와 다르다는 점 유의
    bmi = (w - s) / s * 100;
    return bmi;
}

void printResult(double bmi) {
    if (bmi < 20)
        printf("비만도 %.2f는 정상입니다.\n", bmi);
    else if (bmi < 30) //bmi > 20 && bmi < 30인 경우 
        printf("비만도 %.2f는 경도비만입니다.\n", bmi);
    else if (bmi < 50) //bmi > 30 && bmi < 50인 경우
        printf("비만도 %.2f는 중증도비만입니다.\n", bmi);
    else // 그 외의 경우 (bmi > 50)
        printf("비만도 %.2f는 고도비만입니다.\n", bmi);
}