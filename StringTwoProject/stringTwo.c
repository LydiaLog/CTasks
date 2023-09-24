/* 12���� �ǽ� 3�� : stringTwo.c
   �ۼ��� : 2022. 05. 17
   �ۼ��� : ������
   ���α׷� ���� : ���ڿ��� �Է� �ް� �Է¹��� ���ڿ��� �ҹ��ڴ� �빮�ڷ� �빮�ڴ� �ҹ��ڷ� ��ȯ, ������ ����, �Ųٷ� ����� ����� ����ϴ� ���α׷�
*/

#include<stdio.h>
//�Լ� ����
void toUpperLower(char* str);// �Էµ� ���ڿ��� ��� �빮�ڷ� �����ϴ� �Լ�
int spaceCount(char* str); //������ ������ ����ϴ� �Լ�
void reversePrint(char* str); //���ڿ��� �Ųٷ� ����ϴ� �Լ�

int main(int argc, char* argv[]) {

	char inputString[20]; // ������ ��� \0 �κ� ���� �� 19������.(�Է¹��� ����)

	printf("���ڿ��� �Է��ϼ��� : ");

	gets(inputString); //�Է¹ޱ�(���������� scanf_s�� �Է¹ޱ� �Ұ����ϱ� ������ �� �Լ� ���)

	printf("%�Է� ���ڿ� : %s\n", inputString);
	toUpperLower(inputString);
	printf("%����� ���ڿ� : %s\n", inputString);
	printf("������ ���� : %d\n", spaceCount(inputString));
	printf("�Ųٷ� ����� ���ڿ� : ");
	reversePrint(inputString);
	return 0;
}
void toUpperLower(char* str) {

// ��� �ݺ��ϴ��� ��Ȯ�ϰ� �־����� �ʾ� for��� while�� ����ϴ� ���� �ξ� ȿ�����̴�.
	while (*str != '\0') { //���� Ȯ��
		if(islower(*str)) //islower �Լ� ����ϴ� ���
			*str -= 32;
		else if (isupper(*str)) //isupper �Լ� ����ϴ� ���
			*str += 32;
		str++;//str ����
	}
}
int spaceCount(char* str) {
	int count = 0;

	while (*str != '\0') { 
		if (isspace(*str))//������ ���
			count++; //count�� ����
		str++;
	}
	return count; //while�� �� ���� ���� count������ ������ ������ ��ȯ
}
void reversePrint(char* str) {
	int len = 0;
	int i;
	len = strlen(str); //���ڿ��� ����

	for (i = len - 1; i >= 0; i--) //���̸� �ϳ��� ���鼭 ���
		printf("%c", str[i]);
}