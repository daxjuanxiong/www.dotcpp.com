#include <stdio.h>
 
int main() {
    // 定义双精度浮点数变量
    double num;
 
    // 输入双精度浮点数
    scanf("%lf", &num);
 
    // 输出结果
    printf("%.6f\n", num);  // %f的结果
    printf("%.5f\n", num);  // %f保留5位小数的结果
    printf("%e\n", num);    // %e格式的输出
    printf("%g\n", num);    // %g格式的输出
 
    return 0;
}