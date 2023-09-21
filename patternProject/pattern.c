/* 6���� �ǽ� 2�� : pattern.c
   �ۼ��� : 2022. 04. 04
   �ۼ��� : ������
   ���α׷� ���� : ���̿� �ʺ� �Է� �޾� ��ø �ݺ����� �̿��� ������ ����ϴ� ���α׷�
*/

#include <stdio.h>

// �Լ� ����
void printRect(int height, int width);
void printRightAngledTriangle(int height);
void printlsoscelesTriangle(int height);
void printInvertedTriangle(int height);

int main(void) {

	int height = 0; // �Է¹��� ����
	int width = 0; // �Է¹��� �ʺ�

	printf("������ ���� : ");
	scanf_s("%d", &height);
	printf("������ �ʺ� : ");
	scanf_s("%d", &width);

	//�Լ� ȣ��
	printRect(height, width);
	printRightAngledTriangle(height);
	printlsoscelesTriangle(height);
	printInvertedTriangle(height);

	return 0;
}
void printRect(int height, int width) { // �簢�� �Լ�
	printf("\n�簢�� ��� \n");
	for (int i = 0; i < height; i++) { //height �� 
		for (int j = 0; j < width; j++) 
			printf("*");// �� �ٿ� width����ŭ *���
		printf("\n");
	}
}
void printRightAngledTriangle(int height) { // �����ﰢ�� �Լ�
	printf("\n�����ﰢ�� ��� \n");
	for (int i = 0; i < height; i++) {//height �� 
		for (int j = 0; j < i + 1; j++) 
			printf("*");// �� �ٿ� i + 1���� * ���
		printf("\n");
	}
}
void printlsoscelesTriangle(int height) { // �̵�ﰢ�� �Լ�
	int i, j;

	printf("\n�̵�ﰢ�� ��� \n");
	for (i = 0; i < height; i++) { //height �� 
		for (j = 0; j < height - i - 1; j++)
			printf(" ");//�� �� ���ʿ� height - i��ŭ ����
	
		for (j = 0; j < 2 * i + 1; j++)
			printf("*"); // �� �ٿ� 2i+1���� * ���
		printf("\n");
	}
}
void printInvertedTriangle(int height) { //���̵�ﰢ�� �Լ�
	int i, j;

	printf("\n���ﰢ�� ��� \n");
	for (i = height - 1; i >= 0; i--){ //height �� 
		for (j = 0; j < height - i - 1; j++)
			printf(" "); //�� �� ���ʿ� height - i��ŭ ����
			for (j = 0; j < 2 * i + 1; j++) 
				printf("*");// �� �ٿ� 2i+1���� * ���
			printf("\n");
			
	 }

}