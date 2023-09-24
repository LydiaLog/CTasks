/* 9���� �ǽ� 7�� : copyArray.c
   �ۼ��� : 2022. 04. 30
   �ۼ��� : ������
   ���α׷� ���� : 2���� �迭�� 1���� �迭�� �����ϴ� ���α׷�
*/

#include <stdio.h>

//�Լ�����
void selectionSort(int oneDimArray[]); // ��� ����
int binarySearch(int oneDimArray[], int key); // �˻��� �������� ������ �Ǿ� �־�� ��

int main(int agrc, char* argv[]) {

    int twoDimArray[2][8] = { {1,3,5,7,9,11,13,15},{2,4,6,8,10,12,14,16} }; // 2���� �迭 ����� ���ÿ� �ʱ�ȭ
    int oneDimArray[16] = { 0 }; //2���� �迭�� 1�������� ���� ����� �迭
    int i, j;
    int cnt = 0;
    int key;
    int loc = -1;


    /*
    1���� �迭�� ���鼭 ���� �ִ� ���
    for (i = 0; i < 16; i++) {
        oneDimArray[i] = twoDimArray[i / 8][i % 8]; // i/8 -> 0���� 7������ ���� 0 8���� 15������ ���� 1 i % 8 -> 0~7, 8~15 0,1,2,3,4,5,6,7 �ݺ�(������)
    }
    */

    /*
    2������ �����ϸ鼭 1���� ����� ���
    for (i = 0; i < 2; i++) { // 2���� ����
        for (j = 0; j < 8; j++) {

            oneDimArray[i * 8 + j] = twoDimArray[i][j]; // i = 0�� ��� 0 1 2 ... 15
        }
    }
    */

    // ���� �ϳ� �� ���� �����ϰ� ����� ���
    for (i = 0; i < 2; i++) { // 2���� ����
        for (j = 0; j < 8; j++) {
            oneDimArray[cnt++] = twoDimArray[i][j];
        }
    }

    for (i = 0; i < 16; i++) {
        printf("%d ", oneDimArray[i]);
    }

    selectionSort(oneDimArray); // ����
    printf("\n");
    for (i = 0; i < 16; i++) {
        printf("%d ", oneDimArray[i]);
    }

    printf("\nã�����ϴ� ���� �Է��ϼ��� : ");
    scanf_s("%d", &key);

    loc = binarySearch(oneDimArray, key); // �� ã��

    if (loc == -1) {
        printf("ã���� �ϴ� %d ���� �迭�� �����ϴ�. ", key);
    }
    else {
        printf("ã���� �ϴ� %d ���� �迭 %d�� �ֽ��ϴ�. ", key, loc);
    }

    return 0;
}
void selectionSort(int oneDimArray[]) {
    int i, j;
    int min; // ���� ���� ���� ��ġ�� ��Ÿ���� ����
    int temp;

    for (i = 0; i < 16; i++) {
        min = i;
        for (j = i; j < 16; j++) {
            if (oneDimArray[min] > oneDimArray[j]) //�������� ��ȣ �ٲٸ� ��������
                min = j;
        }
        //�� �ٲٱ�
        temp = oneDimArray[min]; // ���� ���� �� ��ġ ������
        oneDimArray[min] = oneDimArray[i]; 
        oneDimArray[i] = temp;
    }
}
int binarySearch(int oneDimArray[], int key) {
    int start = 0;
    int end = 15;
    int mid = (start + end) / 2;

    while (start < end){

        if(oneDimArray[mid] == key){ // ã���� �ϴ� ���� mid�� ���ٸ�
            return mid; //mid ����
        }else if (oneDimArray[mid] < key) { //mid�� �� ũ��
            start = mid + 1; //�������� �ٲ�
        }else //�� ���� ���
            end = end - 1; //������ ���� �ٲ�

        mid = (start + end) / 2; //�������� ������ �ٲ�����Ƿ� ��� �ٽ�
    }
    return -1; //��ã��
}