/* 12���� �ǽ� 6�� : stringCompare.c
   �ۼ��� : 2022. 05. 17
   �ۼ��� : ������
   ���α׷� ���� :�� ���� ���ڿ��� �Է� �޾� �� ���ڿ��� ������ Ȯ���ϴ� ���α׷�
*/

#include<stdio.h>
//�Լ� ����
int comp(char* str1, char* str2);

int main(int argc, char* argv[]) {

	char str1[20]; //����ڷκ��� �Է¹��� ù ��° ���ڿ� ����
	char str2[20]; //����ڷκ��� �Է¹��� �� ��° ���ڿ� ����

	printf("ù ��° ���ڿ��� �Է��ϼ��� : ");
	scanf_s("%s", str1, 20);

	printf("�� ��° ���ڿ��� �Է��ϼ��� : ");
	scanf_s("%s", str2, 20);

	if (comp(str1, str2)) {
		printf("�� ���ڿ��� �����ϴ�.");
	}
	else {
		printf("�� ���ڿ��� �ٸ��ϴ�.");
	}
	
	return 0;
}

int comp(char* str1, char* str2) {

	while (*str1 != '\0') {
		if (*str1 != *str2) //�� ���ڿ��� �ٸ���
			return 0; //0�� ��ȯ
		str1++;
		str2++;
	}
	return 1;// ������ 1�� ��ȯ
}