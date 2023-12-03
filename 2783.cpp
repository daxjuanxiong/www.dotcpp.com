#include <iostream>

int main() {
    // 输入一个正整数
    int number;
    std::cin >> number;

    // 判断是否是两位数并输出结果
    if (number >= 10 && number <= 99) {
        std::cout << "1" << std::endl;
    } else {
        std::cout << "0" << std::endl;
    }

    return 0;
}
