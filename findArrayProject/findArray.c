/* 9주차 실습 3번 : findArray.c
   작성일 : 2022. 04. 29
   작성자 : 윤서은
   프로그램 설명 : 10개의 정수형 배열을 선언하고 scan, printArray, findArray 함수를 이용해 값을 사용자로부터 입력 받고
                   원하는 값을 배열 안에서 찾아 해당 배열의 위치를 출력하는 프로그램
*/

# include <stdio.h>
//함수 선언
void scan(int arr[10]); // 사용자로부터 값을 입력 받는 함수
void printArray(int arr[]); // 배열 전체 출력 함수
int findArray(int arr[], int key); // 베열에서 해당 값을 찾아 위치를 리턴해주는 함수

int main(int agrc, char* argv[]) {

    int arr[10] = { 0 }; 
    int key = 0;
    int loc = -1; // -1로 초기화 한 이유는 배열이 0부터 시작하므로 없다는 것을 나타내기 위함

    scan(arr);
    printArray(arr);

    printf("배열에서 찾을 값을 입력하세요 : ");
    scanf_s("%d", &key);

    loc = findArray(arr, key);

    if (loc == -1) {
        printf("찾고자 하는 %d 값은 배열에 없습니다. ", key);
    }else {
        printf("찾고자 하는 %d 값은 배열 %d에 있습니다. ", key, loc);
    }
  
    return 0;
}
void scan(int arr[10]) {
    int i = 0;

    for (i = 0; i < 10; i++) {
        printf("%d/10번째 값을 입력하세요 : ", i + 1); // 배열은 0부터 시작하니까 i+1
        scanf_s("%d", &arr[i]);
    }
}
void printArray(int arr[]) {
    int i = 0;

    for (i = 0; i < 10; i++) {
        printf("배열의 [%d] 값 : %d \n", i, arr[i]);
    }
}
int findArray(int arr[], int key) {
    int i = 0;

    for (i = 0; i < 10; i++) {
        if (arr[i] == key) { //배열 안의 값이 입력한 key의 값과 일치할 때
            return i; // 그 배열의 위치 리턴 
        }
    }
    return -1; //for문 안에서 리턴이 이루어지지 않았을 때 -1 리턴
}