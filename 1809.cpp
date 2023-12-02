#include <iostream>
#include <iomanip>

int main() {
    // 定义双精度浮点数变量
    double num;

    // 输入双精度浮点数
    std::cin >> num;

    // 设置输出格式，保留12位小数
    std::cout << std::fixed << std::setprecision(12) << num << std::endl;

    return 0;
}
