/* 9주차 실습 7번 : copyArray.c
   작성일 : 2022. 04. 30
   작성자 : 윤서은
   프로그램 설명 : 2차원 배열을 1차원 배열로 복사하는 프로그램
*/

#include <stdio.h>

//함수선언
void selectionSort(int oneDimArray[]); // 얘로 정렬
int binarySearch(int oneDimArray[], int key); // 검색이 빠르지만 정렬이 되어 있어야 함

int main(int agrc, char* argv[]) {

    int twoDimArray[2][8] = { {1,3,5,7,9,11,13,15},{2,4,6,8,10,12,14,16} }; // 2차원 배열 선언과 동시에 초기화
    int oneDimArray[16] = { 0 }; //2차원 배열을 1차원으로 쓰게 만드는 배열
    int i, j;
    int cnt = 0;
    int key;
    int loc = -1;


    /*
    1차원 배열을 돌면서 값을 넣는 방법
    for (i = 0; i < 16; i++) {
        oneDimArray[i] = twoDimArray[i / 8][i % 8]; // i/8 -> 0부터 7까지는 몫이 0 8부터 15까지는 몫이 1 i % 8 -> 0~7, 8~15 0,1,2,3,4,5,6,7 반복(나머지)
    }
    */

    /*
    2차원을 접근하면서 1차원 만드는 방법
    for (i = 0; i < 2; i++) { // 2차원 접근
        for (j = 0; j < 8; j++) {

            oneDimArray[i * 8 + j] = twoDimArray[i][j]; // i = 0인 경우 0 1 2 ... 15
        }
    }
    */

    // 변수 하나 더 만들어서 간단하게 만드는 방법
    for (i = 0; i < 2; i++) { // 2차원 접근
        for (j = 0; j < 8; j++) {
            oneDimArray[cnt++] = twoDimArray[i][j];
        }
    }

    for (i = 0; i < 16; i++) {
        printf("%d ", oneDimArray[i]);
    }

    selectionSort(oneDimArray); // 정렬
    printf("\n");
    for (i = 0; i < 16; i++) {
        printf("%d ", oneDimArray[i]);
    }

    printf("\n찾고자하는 값을 입력하세요 : ");
    scanf_s("%d", &key);

    loc = binarySearch(oneDimArray, key); // 값 찾기

    if (loc == -1) {
        printf("찾고자 하는 %d 값은 배열에 없습니다. ", key);
    }
    else {
        printf("찾고자 하는 %d 값은 배열 %d에 있습니다. ", key, loc);
    }

    return 0;
}
void selectionSort(int oneDimArray[]) {
    int i, j;
    int min; // 제일 작은 값의 위치를 나타내는 변수
    int temp;

    for (i = 0; i < 16; i++) {
        min = i;
        for (j = i; j < 16; j++) {
            if (oneDimArray[min] > oneDimArray[j]) //오름차순 등호 바꾸면 내림차순
                min = j;
        }
        //값 바꾸기
        temp = oneDimArray[min]; // 제일 작은 값 위치 꺼내기
        oneDimArray[min] = oneDimArray[i]; 
        oneDimArray[i] = temp;
    }
}
int binarySearch(int oneDimArray[], int key) {
    int start = 0;
    int end = 15;
    int mid = (start + end) / 2;

    while (start < end){

        if(oneDimArray[mid] == key){ // 찾고자 하는 값과 mid가 같다면
            return mid; //mid 리턴
        }else if (oneDimArray[mid] < key) { //mid가 더 크면
            start = mid + 1; //시작점이 바뀜
        }else //그 외의 경우
            end = end - 1; //끝나는 점이 바뀜

        mid = (start + end) / 2; //시작점과 끝점이 바뀌었으므로 계산 다시
    }
    return -1; //못찾음
}