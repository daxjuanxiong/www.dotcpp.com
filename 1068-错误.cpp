#include <stdio.h>

// ���������¶ȵ������¶ȵ�ת������
double ctof(double celsius) {
    return 32 + celsius * 9 / 5;
}

int main() {
    printf("�����¶�\t�����¶�\n");

    for (double celsius = -100; celsius <= 150; celsius += 5) {
        double fahrenheit = ctof(celsius);
        printf("c=%.0lf->f=%.0lf\n", celsius, fahrenheit);
    }

    return 0;
}
