/* 12���� �ǽ� 5�� : stringCopy.c
   �ۼ��� : 2022. 05. 17
   �ۼ��� : ������
   ���α׷� ���� :���ڿ� str�� dest �迭�� �����ϴ� ���α׷�
*/

#include<stdio.h>
//�Լ� ����


int main(int argc, char* argv[]) {

	char* str = "copy string"; //������ ���ڿ� ���
	char dest[50];//���� �޴� ���ڿ��� �迭�̾�� ��
	char* start = str;

	int i = 0;

	while (*str != '\0') {
		dest[i++] = *str; //������ ����ؼ� dest[i]�������� ��� �Ұ�
		str++; //���� ��ġ �ٲ�
	}
	dest[i] = '\0'; //���ڿ� ������ �� '\0'�� ����Ǿ�� %s ���ڿ� ����� �����ϴٴ� �� �����ϱ�
	str = start; //���� �ݺ������� ����� str���� �ƴ� ������ str ��
	printf("���� : %s \n", str);
	printf("�纻 : %s \n", dest);
	return 0;
}