#include <iostream>
#include <iomanip>

int main() {
    // 定义变量
    float r1, r2;

    // 输入两个电阻的阻值
    std::cin >> r1 >> r2;

    // 计算并联电阻阻值
    float parallelResistance = 1 / (1 / r1 + 1 / r2);

    // 输出结果，保留到小数点后2位
    std::cout << std::fixed << std::setprecision(2) << parallelResistance << std::endl;

    return 0;
}
