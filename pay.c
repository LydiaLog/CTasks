#define _CRT_SECURE_NO_WARNINGS

/* 3���� �ǽ� 9�� : pay.c
   �ۼ��� : 2022. 03. 16	
   �ۼ��� : ������
   ���α׷� ���� : �޿��� �Է¹޾�
                   �ҵ漼 (�޿��� 10%), �ֹμ� (�ҵ漼�� 10%),
                   ����� (�޿��� 5.89%), �޿��� (�޿� -(�ҵ漼 + �ֹμ� + �����))��
                   ����ϰ� ����ϴ� ���α׷�
*/

#include <stdio.h>

int main(int argc, char* argv[])
{
    int pay;
    printf("�� �޿��� �Է��ϼ��� : ");
    scanf("%d", &pay);
    printf("  >> �� �޿�(+) : %d (��) \n", pay);
     
    int income = pay * 0.1;
    printf("  >> �ҵ漼(-) : %d (��) \n", income);

    int residence = income * 0.1;
    printf("  >> �ֹμ�(-) : %d (��) \n", residence);

    int premium = pay * 0.0589;
    printf("  >> �����(-) : %d (��) \n", premium);

    int total = pay - (income + residence + premium);
    printf("  >> ���޾� : %d (��)", total);


    return 0;
}