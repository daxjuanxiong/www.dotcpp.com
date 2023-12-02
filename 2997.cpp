/*
#include <iostream>:

含义： 这个头文件用于输入和输出操作，
包括了C++标准库中的输入输出流类，
如 std::cin（标准输入流）和 std::cout（标准输出流）等。
用途： 当你想在程序中进行输入和输出操作时，通常会包含这个头文件。
#include <iomanip>:

含义： 这个头文件提供了一些用于格式化输出的工具，
包括了 std::fixed（指定浮点数输出为固定小数位数格式）
和 std::setprecision（设置浮点数的小数位数）等。
用途： 当你需要更精细地控制输出格式，例如保留特定的小数位数，就会包含这个头文件。
#include <cmath>:

含义： 这个头文件包含了一系列数学函数的声明，
如平方根、对数、三角函数等。在这里，它主要提供了数学库函数的支持。
用途： 当你需要进行数学计算时，比如使用 sqrt 计算平方根，就会包含这个头文件。
在C++中，头文件是预编译指令，#include 表示将指定的头文件内容插入到源代码中。
这样，你可以在程序中使用头文件中声明的函数、类、变量等。

*/

#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    // 已知阴影梯形的面积
    double shadowArea = 150.0;

    // 选择一个合适的值给上底和下底
    double upperBase = 15.0;  // 上底为15
    double lowerBase = 25.0;  // 下底为20

    // 计算阴影梯形的高
    double height = shadowArea * 2 / upperBase ;

    // 计算梯形的面积
    double trapezoidArea = (upperBase + lowerBase) * height / 2.0;

    // 输出结果，保留两位小数
    std::cout << std::fixed << std::setprecision(2) << trapezoidArea << std::endl;

    return 0;
}
/*
三角形的面积可以使用以下公式计算：

面积=底边长度×高/2
?

其中，底边长度是三角形底边的长度，高是从底边到对应顶点的垂直距离。

这个公式是基于三角形面积的基本原理：任意三角形的面积等于底边长度与高的乘积的一半。

梯形的面积可以使用以下公式计算：

面积=(上底+下底)/2

其中，上底和下底是梯形的两个平行边的长度，高是从上底到下底的垂直距离。

这个公式是基于梯形面积的基本原理：任意梯形的面积等于上底与下底长度之和与高的乘积的一半。
*/