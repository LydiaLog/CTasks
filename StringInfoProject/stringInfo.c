/* 12���� �ǽ� 4�� : stringInfo.c
   �ۼ��� : 2022. 05. 17
   �ۼ��� : ������
   ���α׷� ���� : Ű����κ��� �Է¹��� ������ ���ڿ��� ���� ���ڿ��� ���� , ���ĺ� , ���� , Ư����ȣ�� ������ ����ϴ� ���α׷�
*/


#include<stdio.h>
//�Լ� ����
void stringInfoPrint(char str[]);

int main(int argc, char* argv[]) {

	char inputString[20]; // ������ ��� \0 �κ� ���� �� 19������.(�Է¹��� ����)

	printf("���ڿ��� �Է��ϼ��� : ");

	gets(inputString); //�Է¹ޱ�(���������� scanf_s�� �Է¹ޱ� �Ұ����ϱ� ������ �� �Լ� ���)

	printf("%�Է� ���ڿ� : %s\n", inputString);
	stringInfoPrint(inputString);

	return 0;
}
void stringInfoPrint(char str[]) {

	int i = 0;
	int len = 0; //���ڿ� ���̸� ���� ����
	int A_cnt = 0; //���ĺ������� ���� ����
	int N_cnt = 0;//���� ������ ���� ����
	int S_cnt = 0;//Ư�����ڸ� ���� ����

	while(str[i] != '\0') {
		len++; //���ڿ� ����
		if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z') { // ||����� ��ҹ��� �� ���� �Ǻ�
			A_cnt++; // ���ĺ� ī��Ʈ ����
		}
		else if (str[i] >= '0' && str[i] <= '9') { //���� �Ǻ�
			N_cnt++; //���� ī��Ʈ ����
		}
		else {//�̿��� ���(Ư�������� ���)
			S_cnt++; // Ư������ ī��Ʈ ����
		}
		str++;
	}
	printf("���ڿ��� ���� : %d\n",len);
	printf("���ĺ��� ���� : %d\n", A_cnt);
	printf("������ ���� : %d\n", N_cnt);
	printf("Ư�������� ���� : %d\n", S_cnt);
}
