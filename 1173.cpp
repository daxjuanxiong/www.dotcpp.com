#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double radius;

    // 循环读取输入数据
    while (std::cin >> radius) {
        // 计算球的体积
        double volume = (4.0 / 3.0) * M_PI * std::pow(radius, 3);

        // 输出结果，保留三位小数
        std::cout << std::fixed << std::setprecision(3) << volume << std::endl;
    }

    return 0;
}
