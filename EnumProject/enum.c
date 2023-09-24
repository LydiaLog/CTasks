/* 13���� �ǽ� 1�� : enum.c
   �ۼ��� : 2022. 05. 28
   �ۼ��� : ������
   ���α׷� ���� : ������ �����ڷ��� �׽�Ʈ ���α׷�
                   ������ enum�� ������ ���, ���ڸ� ��ȣ�� ǥ��
*/


#include <stdio.h>

int main(void)
{
    int channel = 0;
    enum TV { //�±׸� �̿��� ������ ���� ����
        fox = 2, nbc = 4, cbs = 5,
        abc = 11, hbo = 15, show = 17,
        max = 31, espn = 39, cnn = 51
    };
    printf("Here are my favorite cable stations: \n");
    printf(" ABC: \t%2d\n", abc);
    printf(" CBS: \t%2d\n", cbs);
    printf(" CNN: \t%2d\n", cnn);
    printf(" ESPN: \t%2d\n", espn);
    printf(" FOX: \t%2d\n", fox);
    printf(" HBO: \t%2d\n", hbo);
    printf(" MAX: \t%2d\n", max);
    printf(" NBC: \t%2d\n", nbc);
    printf(" SHOW: \t%2d\n", show);
    printf("Select channel : ");
    scanf_s("%d", &channel);

    switch (channel) {
    case abc: printf(" ABC channel "); break;
    case cbs: printf(" CBS channel "); break;
    case cnn: printf(" CNN channel "); break;
    case espn: printf(" ESPN channel "); break;
    case fox: printf(" FOX channel "); break;
    case hbo: printf(" HBO channel "); break;
    case max: printf(" MAX channel "); break;
    case nbc: printf(" NBC channel "); break;
    case show: printf(" show channel "); break;
    default: printf(" no service ");
    }
    return 0;
}
