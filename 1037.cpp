#include <iostream>

// 定义带参的宏，计算a/b的余数
#define MODULO(a, b) (a % b)

int main() {
    int num1, num2;

    // 输入两个整数
    std::cin >> num1 >> num2;

    // 使用宏计算a/b的余数
    int remainder = MODULO(num1, num2);

    // 输出结果
    std::cout << remainder << std::endl;

    return 0;
}
