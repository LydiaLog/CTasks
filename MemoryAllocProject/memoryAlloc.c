/* 11���� �ǽ� 5�� : memoryAlloc.c
   �ۼ��� : 2022. 05. 14
   �ۼ��� : ������
   ���α׷� ���� : ����ڷκ��� ������ �迭�� ������ �Է¹޾� �����޸��Ҵ����� �迭�� ����� 1���� ����ڰ� �Է��� ���� ������ ���� ������ �迭�� ä��� ����� �� �޸𸮸� �����ϴ� ���α׷�
*/

#include <stdio.h>
#include <stdlib.h>

//�Լ� ����
void fillArray(int* p, int size);
void printArray(int* p, int size);

int main(int argc, char* argv[])
{
	int size; //�迭 ũ�⸦ ��Ÿ���� ����
	int *p = NULL;
	int i;

	printf("����� �迭 ũ�� �Է� : ");
	scanf_s("%d", &size, 4);//�迭 ũ�� �Է� �ޱ� (4byte �Ҵ�)

	p = (int *)malloc(size * sizeof(int)); //���� �Ҵ� �迭

	fillArray(p, size);
	printArray(p, size);

	free(p);//�޸� ����

	return 0;
}
void fillArray(int* p, int size) {
	int i;

	for (i = 0; i < size; i++) { //i�� ������Ű�鼭
		*(p + i) = rand() % 10 + 1; //1 ~ 10 �������� �� �ֱ�
		//p[i] = i;
	}

}

void printArray(int* p, int size) {
	int i;

	for (i = 0; i < size; i++) { //�Էµ� ����ŭ �ݺ�
		printf("[%d] : %d \n",i, *(p + i)); //���� �� ���
	}

}