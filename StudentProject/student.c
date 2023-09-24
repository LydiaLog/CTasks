/* 13주차 실습 6번 : student.c
   작성일 : 2022. 05. 29
   작성자 : 윤서은
   프로그램 설명 : 구조체를 이용해 학생 5명의 정보를 저장히거 출력하는 프로그램
*/

#include <stdio.h>
//구조체 선언
typedef struct {
    char name[20]; //이름
    int age;   //나이
    int score[2];   // 중간 기말
}STUDENT;

void inputArray(STUDENT std[]); //std[0] , *(std + 0) 사용 가능
void printArray(STUDENT *std); //p[0], *p, p++ 사용 가능
int sum(int score[2]); //총합 계산을 위한 함수
double average(int s, int count); //평균 계산을 위한 함수

int main(void) {
   
    STUDENT std[5]; // 5개짜리 구조체 배열(여기서 std는 배열 이름 즉, 주소 상수)

    inputArray(std); // 입력을 받을 함수

    printArray(std); // 출력을 받을 함수

    return 0;
}
void inputArray(STUDENT std[]) {
    int i;

    for (i = 0; i < 5; i++) {
        printf("%d번째 학생의 이름 입력 : ", i + 1);
        scanf_s("%s", std[i].name, 20); // 20은 최대 입력 바이트
        printf("%d번째 학생의 나이 입력 : ", i + 1);
        scanf_s("%d", &std[i].age);
        printf("%d번째 학생의 중간고사 점수 입력 : ", i + 1);
        scanf_s("%d", &std[i].score[0]);
        printf("%d번째 학생의 기말고사 점수 입력 : ", i + 1);
        scanf_s("%d", &std[i].score[1]);
    }
}
void printArray(STUDENT* p) {
    int i;

    printf("%10s %4s %4s %4s %4s %4s \n", "이름", "나이", "중간", "기말", "총점", "평균");
    for (i = 0; i < 5; i++) {
        printf("%10s %4d %4d %4d %4d %4.1f \n", p[i].name, p[i].age, p[i].score[0], p[i].score[1], sum(p[i].score), average(sum(p[i].score), 2));
    }
}
int sum(int score[2]) {

    return score[0] + score[1];

}
double average(int s, int count) {
    return (double)s / count;
}
