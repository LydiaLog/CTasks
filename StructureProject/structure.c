/* 13주차 실습 3, 4, 5번 : structure.c
   작성일 : 2022. 05. 28
   작성자 : 윤서은
   프로그램 설명 : 구조체 유도자료형을 이용한 분수의 곱을 계산하고 출력하는 프로그램
				   구조체는 서로 연관된 원소들의 집합을 하나의 이름으로 묶어놓은 형태의 자료구조
*/

#include <stdio.h>

//모든 함수에서 사용 가능하게 하는 방법 구조체는 필요할때마다 메인 함수 안에 선언
//방법 1) 새로 정의된 자료형(가장 많이 쓰이는 방법 -> 필요할 때마다 사용)
typedef struct{ 
	int numerator; //분자를 나타내는 변수
	int denominator; //분모를 나타내는 변수
}Fraction;
/*
//방법 2) struct Fraction의 형태로 사용하면 매개 변수 전달 가능, 리턴받을 수도 있음
struct Fraction{ //여기서의 Fraction은 구조체 태그명
	int numerator; 
	int denominator; 
} //Fraction;
//방법 3) 구조체 변수를 선언하고자 할 때 사용하는 방법(단, 매개 변수로 전달 불가)
struct{
	int numerator; 
	int denominator; 
} fr1, fr2, res;
*/
/*
Fraction multiplication(Fraction f1, Fraction f2) { //구조체는 변수 타입이며 값을 복사함
	Fraction res;
	res.numerator = f1.numerator * f2.numerator;
	res.denominator = f1.denominator * f2.denominator;

	return res;

}
*/

void multiplication(Fraction *f1, Fraction *f2, Fraction *res) { //구조체는 변수 타입이며 값을 복사함
	
	(* res).numerator = f1->numerator * f2->numerator; //(* res).numerator == res ->numerator
	res->denominator = f1->denominator * f2->denominator;

}

int main(void) {

	/*해당 함수 내에서만 사용 가능한 방법
	struct Fraction{ //구조체 변수 직접할당 
		int numerator; //분자를 나타내는 변수
		int denominator; //분모를 나타내는 변수
	} fr1, fr2, res;
	*/

	Fraction fr1, fr2, res; //구조체를 추가로 변수 선언을 하고자 할 때
	printf("Key first fraciton in the form of x/y: ");
	scanf_s("%d / %d", &fr1.numerator, &fr1.denominator);
	printf("Key second fraciton in the form of x/y: ");
	scanf_s("%d / %d", &fr2.numerator, &fr2.denominator);

	/*res.numerator = fr1.numerator * fr2.numerator;
	res.denominator = fr1.denominator * fr2.denominator;
	*/

	//res = multiplication(fr1, fr2);
	multiplication(&fr1, &fr2, &res); //주소값을 주며 간접참조

	printf("\nThe result of %d/%d * %d%d is %d/%d",
		fr1.numerator, fr1.denominator,
		fr2.numerator, fr2.denominator,
		res.numerator, res.denominator);

	return 0;
}
