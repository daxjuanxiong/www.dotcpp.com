#include <iostream>
#include <iomanip>

// 定义函数，找出最大的数
double findMax(double a, double b, double c) {
    double maxVal = a;

    if (b > maxVal) {
        maxVal = b;
    }

    if (c > maxVal) {
        maxVal = c;
    }

    return maxVal;
}

// 定义带参宏，找出最大的数
#define FIND_MAX(a, b, c) ((a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c))


int main() {
    double num1, num2, num3;

    // 输入三个实数
    std::cin >> num1 >> num2 >> num3;

    // 使用函数找出最大的数并输出
    double maxByFunction = findMax(num1, num2, num3);
    std::cout << std::fixed << std::setprecision(3) << maxByFunction << std::endl;

    // 使用带参宏找出最大的数并输出
    double maxByMacro = FIND_MAX(num1, num2, num3);
    std::cout << std::fixed << std::setprecision(3) << maxByMacro << std::endl;

    return 0;
}
