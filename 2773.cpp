#include <iostream>   // 包含输入输出流头文件
#include <cmath>      // 包含数学函数头文件
#include <iomanip>    // 包含输出格式设置头文件

int main() {
    // 定义变量
    double Xa, Ya, Xb, Yb;  // 定义四个双精度浮点数变量，分别表示点A和点B的坐标

    // 输入端点坐标
    std::cin >> Xa >> Ya;   // 从标准输入流中读取A点的坐标
    std::cin >> Xb >> Yb;   // 从标准输入流中读取B点的坐标

    // 计算线段AB的长度
    double distance = std::sqrt(std::pow(Xb - Xa, 2) + std::pow(Yb - Ya, 2));  // 使用sqrt和pow函数计算两点间的距离

    // 输出结果，保留到小数点后3位
    std::cout << std::fixed << std::setprecision(3) << distance << std::endl;  // 输出结果，保留小数点后3位

    return 0;  // 返回0，表示程序执行成功
}

/*
iomanip 的全称是 Input/Output Manipulation，
它是 C++ 标准库中的一个头文件，用于格式化输入和输出。
iomanip 提供了一些用于格式控制的函数，使得程序员能够更灵活地控制输出的格式，
包括设置输出的精度、宽度、对齐方式等。
在上面的代码中，
std::fixed 和 std::setprecision 就是 iomanip 头文件中定义的一些用于格式化输出的功能。
*/


