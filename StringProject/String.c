/* 12���� �ǽ� 2�� : String.c
   �ۼ��� : 2022. 05. 17
   �ۼ��� : ������
   ���α׷� ���� : ���ڿ��� �Է� �ް� �Է¹��� ���ڿ��� ��� �빮�ڷ� ������ ����� ���ڿ��� ���̸� ����ؼ� ����ϴ� ���α׷�
*/

#include<stdio.h>
//�Լ� ����
void toUpper(char* str);// �Էµ� ���ڿ��� ��� �빮�ڷ� �����ϴ� �Լ�
int length(char* str); //���ڿ��� ���̸� ����ϴ� �Լ�

int main(int argc, char* argv[]) {

	char inputString[20]; // ������ ��� \0 �κ� ���� �� 19������.(�Է¹��� ����)

	printf("���ڿ��� �Է��ϼ��� : ");

	scanf_s("%s", inputString, 20); // �迭 ������ �� ������� ��! �ּҰ��̹Ƿ� &�� ������X
	//scanf_s("%s", &inputString[0]); �� ��� ����

	printf("�Է� ���ڿ� : %s\n", inputString);
	toUpper(inputString);
	printf("����� ���ڿ� : %s\n", inputString);
	printf("���ڿ��� ���� : %d\n", length(inputString));

	return 0;
}

void toUpper(char* str) {
	/*
	int i = 0;// �����
	for(i = 0; str[i] != '\0'; i++) {//���ڿ��� i��°�� \0�� �ƴҶ����� i�� ������.
		if(islower(str[i])) //islower �Լ� ����ϴ� ���
			str[i] -= 32;
		if (str[i] >= 'a' && str[i] <= 'z') //�ҹ����� ���
			str[i] -= 32; //�ҹ��ڰ� �빮�ں��� ũ�Ƿ� 32�� ���� ���ָ� �ҹ����� ��� �빮�ڷ� ��ȯ�� �ȴ�
			�ҹ��ڷ� �����ϴ� ���
			if (str[i] >= 'A' && str[i] <= 'Z') 
			str[i] += 32;
			}
			*/

	//�ݺ����� ��� �ݺ��ϴ��� ��Ȯ�ϰ� �־����� �ʾ� for��� while�� ����ϴ� ���� �ξ� ȿ�����̴�.
	while(*str != '\0'){ //���� Ȯ��
		if (islower(*str)) //islower �Լ� ����ϴ� ���
			*str -= 32;
		str++;//str ����
	}
}

int length(char* str) {
	int len = 0;

	while (*str++ != '\0') { //�־��� ������ ���
		len++; //len ����
	}
	return len; // ������ ����� ���� ����
}