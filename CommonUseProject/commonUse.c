/* 13주차 실습 2번 : commomUse.c
   작성일 : 2022. 05. 28
   작성자 : 윤서은
   프로그램 설명 : 공용체 유도자료형 테스트 프로그램
                   공용체는 메모리에서 서로 다른 데이터 형식을 공유할 수 있도록 하는 개념
                   구조체와 같은 문법 양식 따름
*/

#include <stdio.h>

int main(void) {
    union { //공용체는 union이라는 키워드 사용
        short num;
        char chAry[2];
    }data;

    data.num = 16706;

    printf("short: %hd\n", data.num);

    data.chAry[0] = 'A';
    data.chAry[1] = 'B';
    // 더 이상 data.num에 해당하는 값은 사용할 수 없다.
    printf("Ch[0] : %c\n", data.chAry[0]);
    printf("Ch[1] : %c\n", data.chAry[1]);
    // printf ("short: %hd\n" , data.num);  // 결과를 확인해 보세요.
    return 0;
}