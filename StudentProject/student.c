/* 13���� �ǽ� 6�� : student.c
   �ۼ��� : 2022. 05. 29
   �ۼ��� : ������
   ���α׷� ���� : ����ü�� �̿��� �л� 5���� ������ �������� ����ϴ� ���α׷�
*/

#include <stdio.h>
//����ü ����
typedef struct {
    char name[20]; //�̸�
    int age;   //����
    int score[2];   // �߰� �⸻
}STUDENT;

void inputArray(STUDENT std[]); //std[0] , *(std + 0) ��� ����
void printArray(STUDENT *std); //p[0], *p, p++ ��� ����
int sum(int score[2]); //���� ����� ���� �Լ�
double average(int s, int count); //��� ����� ���� �Լ�

int main(void) {
   
    STUDENT std[5]; // 5��¥�� ����ü �迭(���⼭ std�� �迭 �̸� ��, �ּ� ���)

    inputArray(std); // �Է��� ���� �Լ�

    printArray(std); // ����� ���� �Լ�

    return 0;
}
void inputArray(STUDENT std[]) {
    int i;

    for (i = 0; i < 5; i++) {
        printf("%d��° �л��� �̸� �Է� : ", i + 1);
        scanf_s("%s", std[i].name, 20); // 20�� �ִ� �Է� ����Ʈ
        printf("%d��° �л��� ���� �Է� : ", i + 1);
        scanf_s("%d", &std[i].age);
        printf("%d��° �л��� �߰���� ���� �Է� : ", i + 1);
        scanf_s("%d", &std[i].score[0]);
        printf("%d��° �л��� �⸻��� ���� �Է� : ", i + 1);
        scanf_s("%d", &std[i].score[1]);
    }
}
void printArray(STUDENT* p) {
    int i;

    printf("%10s %4s %4s %4s %4s %4s \n", "�̸�", "����", "�߰�", "�⸻", "����", "���");
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
