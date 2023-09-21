/* 6주차 실습 3번 : average.c
   작성일 : 2022. 04. 05
   작성자 : 윤서은
   프로그램 설명 : do while문을 사용해 0이 아닌 정수가 입력될 때까지의 
                   합과 평균을 계산하는 프로그램
*/

#include <stdio.h>

//함수 선언
double average(int total, int count);

int main(void) 
{
    int n = 0; // 사용자로부터 입력받을 정수
    int total = 0; // 입력 받은 정수들의 합
    double avg = 0.0; // 평균
    int count = 0;
    do {
        printf("정수 입력 : ");
        scanf_s("%d", &n);
        if (n != 0) { //0이 아닐 경우
            total += n; //더해주기

            //함수 호출
            avg = average(total, ++count);

            printf("-> 합 : %d 평균 : %.1f\n", total, avg);
        }
        else //0일 경우
            printf("-> 종료"); // 프로그램 종료
    } while (n != 0);

    return 0;
}
double average(int total, int count) {
    return (double)total / count;
}
