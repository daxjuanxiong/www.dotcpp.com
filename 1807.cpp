#include <iostream>
#include <iomanip>

int main() {
    // 定义三个整数变量
    int a, b, c;

    // 输入三个整数
    std::cin >> a >> b >> c;

    // 按格式输出
    std::cout << std::left << std::setw(8) << a
              << std::left << std::setw(8) << b
              << std::left << std::setw(8) << c << std::endl;

    return 0;
}
