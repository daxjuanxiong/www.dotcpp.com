#include <iostream>

int main() {
    int a, b, c;

    // 从标准输入读取三个整数
    std::cin >> a >> b >> c;

    // 找出最大的数
    int maxNumber = a;

    if (b > maxNumber) {
        maxNumber = b;
    }

    if (c > maxNumber) {
        maxNumber = c;
    }

    // 输出最大的数到标准输出
    std::cout << maxNumber << std::endl;

    // 返回0表示程序成功运行
    return 0;
}
