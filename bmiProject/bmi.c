/* 5���� �ǽ� 5�� : bmi.c
   �ۼ��� : 2022. 03. 29
   �ۼ��� : ������
   ���α׷� ���� : Ű�� �����Ը� �Է¹޾� ǥ��ü���� ����� ��
                   �� ������ ���� �� ���θ� ����ϴ� ���α׷�
*/


#include <stdio.h>

//�Լ� ����
double calStan(double h);
double calBmi(double w, double s);
void printResult(double bmi);

int main(int argc, char* argv[])
{
    double height = 0.0; // Ű
    double weight = 0.0; // ������
    double stanweight = 0.0; // ǥ��ü��
    double bmi = 0.0; //������

    printf("Ű�� �Է��ϼ��� : ");
    scanf_s("%lf", &height); // Ű �Ǽ� ������ �Է� �ޱ�
    printf("�����Ը� �Է��ϼ��� : ");
    scanf_s("%lf", &weight); // ������ �Ǽ� ������ �Է� �ޱ�

    stanweight = calStan(height);
    bmi = calBmi(weight, stanweight);

    printResult(bmi);

    return 0;
}

double calStan(double h) {  //h�� Ű
    return (h - 100) * 0.9;
}

double calBmi(double w, double s) { //w�� ������, s�� ǥ��ü��
    double bmi = 0.0; // �ٸ� ������ ���� bmi�� �ٸ��ٴ� �� ����
    bmi = (w - s) / s * 100;
    return bmi;
}

void printResult(double bmi) {
    if (bmi < 20)
        printf("�񸸵� %.2f�� �����Դϴ�.\n", bmi);
    else if (bmi < 30) //bmi > 20 && bmi < 30�� ��� 
        printf("�񸸵� %.2f�� �浵���Դϴ�.\n", bmi);
    else if (bmi < 50) //bmi > 30 && bmi < 50�� ���
        printf("�񸸵� %.2f�� ���������Դϴ�.\n", bmi);
    else // �� ���� ��� (bmi > 50)
        printf("�񸸵� %.2f�� �����Դϴ�.\n", bmi);
}