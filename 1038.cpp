#include <iostream>
#include <iomanip>
#include <cmath>


// 定义带参宏，计算S
#define CALCULATE_S(a, b, c)     ((a + b + c) / 2)

// 定义带参宏，计算三角形面积
#define CALCULATE_AREA(a, b, c)       (sqrt(CALCULATE_S(a, b, c) * (CALCULATE_S(a, b, c) - a) * (CALCULATE_S(a, b, c) - b) * (CALCULATE_S(a, b, c) - c)))

int main() {
    double side1, side2, side3;

    // 输入三角形的三条边
    std::cin >> side1 >> side2 >> side3;

    // 使用带实参的宏名计算三角形面积
    double area = CALCULATE_AREA(side1, side2, side3);

    // 输出结果，保留3位小数
    std::cout << std::fixed << std::setprecision(3) << area << std::endl;

    return 0;
}

