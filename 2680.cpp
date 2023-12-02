#include <iostream>

int main() {
    // 定义纸张的名称
    std::string paperSize;

    // 输入纸张的名称
    std::cin >> paperSize;

    // 定义 A0 纸张的初始大小
    int length = 1189;
    int width = 841;
    int t = 0;

    // 根据纸张的名称计算大小
    for (int i = 0; i < paperSize[1] - '0'; ++i) {
        // 对折过程，取下整
        t = width; // 修正拼写错误
        width = length / 2;
        length = t; // 修正变量名错误
    }

    // 输出纸张的大小
    std::cout << length << std::endl;
    std::cout << width << std::endl;

    return 0;
}
