/* �ǽ� 3 : overflow.c
   �ۼ��� : 2022.03.11
   �ۼ��� : ������
   ���α׷� ���� : �����÷ο�� ����÷ο� �ǽ�
*/
#include <stdio.h>

int main(void)
{
	unsigned char uc = 255 + 1;
	short s = 32767 + 1;
	float min = 1.175E-50;
	float max = 3.403E39;

	printf("%u\n", uc);		//�����÷ο� �߻�
	printf("%d\n", s);		//�����÷ο� �߻�
	printf("%e\n", min);	//����÷ο� �߻�
	printf("%f\n", max);	//�����÷ο� �߻�
	// �����÷ο쳪 ����÷ο�� �Ͼ�� �ʾƾ� ��. �ǵ��� X
	return 0;
}