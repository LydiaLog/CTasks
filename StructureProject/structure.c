/* 13���� �ǽ� 3, 4, 5�� : structure.c
   �ۼ��� : 2022. 05. 28
   �ۼ��� : ������
   ���α׷� ���� : ����ü �����ڷ����� �̿��� �м��� ���� ����ϰ� ����ϴ� ���α׷�
				   ����ü�� ���� ������ ���ҵ��� ������ �ϳ��� �̸����� ������� ������ �ڷᱸ��
*/

#include <stdio.h>

//��� �Լ����� ��� �����ϰ� �ϴ� ��� ����ü�� �ʿ��Ҷ����� ���� �Լ� �ȿ� ����
//��� 1) ���� ���ǵ� �ڷ���(���� ���� ���̴� ��� -> �ʿ��� ������ ���)
typedef struct{ 
	int numerator; //���ڸ� ��Ÿ���� ����
	int denominator; //�и� ��Ÿ���� ����
}Fraction;
/*
//��� 2) struct Fraction�� ���·� ����ϸ� �Ű� ���� ���� ����, ���Ϲ��� ���� ����
struct Fraction{ //���⼭�� Fraction�� ����ü �±׸�
	int numerator; 
	int denominator; 
} //Fraction;
//��� 3) ����ü ������ �����ϰ��� �� �� ����ϴ� ���(��, �Ű� ������ ���� �Ұ�)
struct{
	int numerator; 
	int denominator; 
} fr1, fr2, res;
*/
/*
Fraction multiplication(Fraction f1, Fraction f2) { //����ü�� ���� Ÿ���̸� ���� ������
	Fraction res;
	res.numerator = f1.numerator * f2.numerator;
	res.denominator = f1.denominator * f2.denominator;

	return res;

}
*/

void multiplication(Fraction *f1, Fraction *f2, Fraction *res) { //����ü�� ���� Ÿ���̸� ���� ������
	
	(* res).numerator = f1->numerator * f2->numerator; //(* res).numerator == res ->numerator
	res->denominator = f1->denominator * f2->denominator;

}

int main(void) {

	/*�ش� �Լ� �������� ��� ������ ���
	struct Fraction{ //����ü ���� �����Ҵ� 
		int numerator; //���ڸ� ��Ÿ���� ����
		int denominator; //�и� ��Ÿ���� ����
	} fr1, fr2, res;
	*/

	Fraction fr1, fr2, res; //����ü�� �߰��� ���� ������ �ϰ��� �� ��
	printf("Key first fraciton in the form of x/y: ");
	scanf_s("%d / %d", &fr1.numerator, &fr1.denominator);
	printf("Key second fraciton in the form of x/y: ");
	scanf_s("%d / %d", &fr2.numerator, &fr2.denominator);

	/*res.numerator = fr1.numerator * fr2.numerator;
	res.denominator = fr1.denominator * fr2.denominator;
	*/

	//res = multiplication(fr1, fr2);
	multiplication(&fr1, &fr2, &res); //�ּҰ��� �ָ� ��������

	printf("\nThe result of %d/%d * %d%d is %d/%d",
		fr1.numerator, fr1.denominator,
		fr2.numerator, fr2.denominator,
		res.numerator, res.denominator);

	return 0;
}
