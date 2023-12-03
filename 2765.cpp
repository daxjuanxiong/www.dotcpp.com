#include <iostream>
#include <iomanip> // 用于设置输出精度

int main() {
    // 定义变量
    int a, b;

    // 读取输入
    std::cin >> a >> b;

    // 计算浮点数值
    double result = static_cast<double>(a) / b;

    // 设置输出精度，保留小数点后9位
    std::cout << std::fixed << std::setprecision(9) << result << std::endl;

    return 0;
}
