#include <stdio.h>

int main() {
    int score;
    int excellent = 0, pass = 0, fail = 0;

    printf("������ѧ���ɼ�����0������:\n");

    while (1) {
        scanf("%d", &score);

        // ����Ϊ0����ʱ����ѭ��
        if (score <= 0) {
            break;
        }

        // ͳ�Ƴɼ�������
        if (score >= 85) {
            excellent++;
        } else if (score >= 60) {
            pass++;
        } else {
            fail++;
        }
    }

    // ��������ɼ��ε�����
    printf(">=85:%d\n", excellent);
    printf("60-84:%d\n", pass);
    printf("<60:%d\n", fail);

    return 0;
}
