#include <iostream>

// 计算最大公约数的函数
int calculateGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// 计算最小公倍数的函数
int calculateLCM(int a, int b) {
    // 最小公倍数 = (两数的乘积) / 最大公约数
    return (a * b) / calculateGCD(a, b);
}

int main() {
    // 输入两个整数
    int num1, num2;
    std::cin >> num1;
    std::cin >> num2;

    // 调用计算最大公约数和最小公倍数的函数
    int gcdResult = calculateGCD(num1, num2);
    int lcmResult = calculateLCM(num1, num2);

    // 输出结果
    std::cout << gcdResult << std::endl;
    std::cout  << lcmResult << std::endl;

    return 0;
}
