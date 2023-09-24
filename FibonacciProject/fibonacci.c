/* 9주차 실습 2번 : fibonacci.c
   작성일 : 2022. 04. 29
   작성자 : 윤서은
   프로그램 설명 : 정수형 배열 10개를 선언하고 각 배열에 피보나치수열의 값을 반복문을 이용해서 저장하고 
                   출력은 printArray 함수,setFiboArray라는 피보나치수열을 저장하는 함수를 이용해 값을 출력하는 프로그램
   
*/
# include <stdio.h>
//함수 선언
void printArray(int fiboArr[]);
void setFiboArray(int fiboArr[]);

int main(int agrc, char* argv[]) {
    int fiboArr[10] = { 0,1 }; // 0번째 값은 0, 1번째 값은 1로 초기화, 나머지 값들은 기본 값 0으로 초기화

    setFiboArray(fiboArr);
    printArray(fiboArr);

    return 0;
}
void setFiboArray(int fiboArr[]) {
    int i = 0;

    /*fiboArr[0] = 0;
    fiboArr[1] = 1;*/

    for (i = 2; i < 10; i++) { // 0,1 번째 값은 초기화 되어있으므로 2번째 값부터 
        fiboArr[i] = fiboArr[i - 2] + fiboArr[i - 1]; // 피보나치 공식에 의한 식
    }
}
void printArray(int fiboArr[]) {
    int i = 0;

    printf("[ ");
    for (i = 0; i < 10; i++) {
        printf("%d ", fiboArr[i]);
    }
    printf("]");
}