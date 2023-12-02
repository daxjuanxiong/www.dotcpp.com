#include <stdio.h>

// 定义摄氏温度到华氏温度的转换函数
double ctof(double celsius) {
    return 32 + celsius * 9 / 5;
}

int main() {
    printf("摄氏温度\t华氏温度\n");

    for (double celsius = -100; celsius <= 150; celsius += 5) {
        double fahrenheit = ctof(celsius);
        printf("c=%.0lf->f=%.0lf\n", celsius, fahrenheit);
    }

    return 0;
}
