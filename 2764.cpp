#include <iostream>

int main() {
    // 定义输入的整数
    int dividend, divisor;

    // 输入被除数和除数
    std::cin >> dividend >> divisor;

    // 计算整数商和余数
    int quotient = dividend / divisor;
    int remainder = dividend % divisor;

    // 输出结果
    std::cout << quotient << " " << remainder << std::endl;

    return 0;
}
