#define _CRT_SECURE_NO_WARNINGS

/* 4���� �ǽ� 4�� : pay.c
   �ۼ��� : 2022. 03. 23
   �ۼ��� : ������
   ���α׷� ���� : �Լ��� �̿��� �޿��� �Է¹ް�
                   �ҵ漼 (�޿��� 10%) => getIncomeTax,
                   �ֹμ� (�ҵ漼�� 10%) => getLocalinhabitantsTax,
                   ����� (�޿��� 5.89%) => getInsurance,
                   �޿��� (�޿� -(�ҵ漼 + �ֹμ� + �����)) => getPay ��
                   ����ϰ� ����ϴ� ���α׷�
*/

#include <stdio.h>

int main(int argc, char* argv[])
{
    int pay;
    int Tpay = 0;
    int Lpay = 0;
    int Ipay = 0;
    int Gpay = 0;

    printf("�� �޿��� �Է��ϼ��� : ");
    scanf("%d", &pay);


    Tpay = getIncomeTax(pay);
    Lpay = getLocalinhabitantsTax(Tpay);
    Ipay = getInsurance(pay);
    Gpay = getPay(pay, Tpay, Lpay, Ipay);

    printResult(pay, Tpay, Lpay, Ipay, Gpay);

    return 0;
}

int getIncomeTax(int pay) {

    return (int)(pay * 0.1);

}

int getLocalinhabitantsTax(int Tpay) {

    return (int)(Tpay * 0.1);
}

int getInsurance(int pay) {

    return (int)(pay * 0.0589);

}

int getPay(int pay, int Tpay, int Lpay, int Ipay) {

    return pay - (Tpay + Lpay + Ipay);

}

int printResult(int pay, int Tpay, int Lpay, int Ipay, int Gpay) {

    printf("  >> �� �޿�(+) : %d (��) \n", pay);
    printf("  >> �ҵ漼(-) : %d (��) \n", Tpay);
    printf("  >> �ֹμ�(-) : %d (��) \n", Lpay);
    printf("  >> �����(-) : %d (��) \n", Ipay);
    printf("  >> ���޾� : %d (��)", Gpay);

}
