#include <iostream>
#include <iomanip>

int main() {
    // 定义单精度浮点数变量
    float num;

    // 输入单精度浮点数
    std::cin >> num;

    // 设置输出格式，保留三位小数
    std::cout << std::fixed << std::setprecision(3) << num << std::endl;

    return 0;
}
