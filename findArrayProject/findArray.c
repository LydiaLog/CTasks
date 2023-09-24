/* 9���� �ǽ� 3�� : findArray.c
   �ۼ��� : 2022. 04. 29
   �ۼ��� : ������
   ���α׷� ���� : 10���� ������ �迭�� �����ϰ� scan, printArray, findArray �Լ��� �̿��� ���� ����ڷκ��� �Է� �ް�
                   ���ϴ� ���� �迭 �ȿ��� ã�� �ش� �迭�� ��ġ�� ����ϴ� ���α׷�
*/

# include <stdio.h>
//�Լ� ����
void scan(int arr[10]); // ����ڷκ��� ���� �Է� �޴� �Լ�
void printArray(int arr[]); // �迭 ��ü ��� �Լ�
int findArray(int arr[], int key); // �������� �ش� ���� ã�� ��ġ�� �������ִ� �Լ�

int main(int agrc, char* argv[]) {

    int arr[10] = { 0 }; 
    int key = 0;
    int loc = -1; // -1�� �ʱ�ȭ �� ������ �迭�� 0���� �����ϹǷ� ���ٴ� ���� ��Ÿ���� ����

    scan(arr);
    printArray(arr);

    printf("�迭���� ã�� ���� �Է��ϼ��� : ");
    scanf_s("%d", &key);

    loc = findArray(arr, key);

    if (loc == -1) {
        printf("ã���� �ϴ� %d ���� �迭�� �����ϴ�. ", key);
    }else {
        printf("ã���� �ϴ� %d ���� �迭 %d�� �ֽ��ϴ�. ", key, loc);
    }
  
    return 0;
}
void scan(int arr[10]) {
    int i = 0;

    for (i = 0; i < 10; i++) {
        printf("%d/10��° ���� �Է��ϼ��� : ", i + 1); // �迭�� 0���� �����ϴϱ� i+1
        scanf_s("%d", &arr[i]);
    }
}
void printArray(int arr[]) {
    int i = 0;

    for (i = 0; i < 10; i++) {
        printf("�迭�� [%d] �� : %d \n", i, arr[i]);
    }
}
int findArray(int arr[], int key) {
    int i = 0;

    for (i = 0; i < 10; i++) {
        if (arr[i] == key) { //�迭 ���� ���� �Է��� key�� ���� ��ġ�� ��
            return i; // �� �迭�� ��ġ ���� 
        }
    }
    return -1; //for�� �ȿ��� ������ �̷������ �ʾ��� �� -1 ����
}