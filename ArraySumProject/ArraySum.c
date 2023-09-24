/* 9주차 실습 1번 : ArraySum.c
   작성일 : 2022. 04. 29
   작성자 : 윤서은
   프로그램 설명 : 10개의 정수형 배열을 주어진 값으로 선언과 동시에 초기화하고
                   반복문과 배열을 출력하는 printArray 함수, 총합을 출력하는 sumArray 함수를 이용해 
                   배열의 값과 총합을 계산해 출력하는 프로그램
*/

#include <stdio.h>

// 함수 선언
int arraySum(int arr[]);
void printArray(int arr[]); // 리턴 값이 필요 없어서 void

int main(int agrc, char* argv[]) {
    int intArr[10] = { 4,2,3,1,4,5,6,7,4,3 }; // 10개의 정수형 배열 선언과 동시에 초기화
    int i = 0;
    int sum = 0; 

    sum = arraySum(intArr);

    printf("배열 전체 합 : %d \n", sum);

    printArray(intArr);

    return 0;
}
int arraySum(int arr[]) {
    int sum = 0;// 정수 배열 총합 계산을 위한 변수
    int i = 0;
    for (i = 0; i < 10; i++) {
        sum += arr[i]; //값을 누적시킨다
    }
    return sum;// 누적시킨 값들을 반영한 최종 sum값 반환
}
void printArray(int arr[]) {
    int i = 0;
    for (i = 0; i < 10; i++) { // 반복문을 이용한 10개의 배열 출력문
        if(i < 9) // i가 9보다 작을 경우
            printf("배열[%d] = %d \n",i, arr[i]); // 숫자 출력하고 줄바꿈
        else // 그 외의 경우
            printf("배열[%d] = %d ",i, arr[i]); // 숫자만 출력
    }

}