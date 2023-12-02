/*
#include <iostream>: 这是C++标准库中的输入输出流头文件。
它包含了用于输入和输出的基本工具，
比如 std::cin（标准输入流）和 std::cout（标准输出流）等。
在这个程序中，它被用来接收用户的输入和输出结果。

#include <iomanip>: 这是C++标准库中的输入输出流操作符头文件，
提供了一些用于格式化输出的工具。
在这个程序中，它用于设置输出结果的格式，
包括 std::fixed 用于指定输出为固定小数位数格式，
以及 std::setprecision(2) 用于设置输出小数点后的位数为2。
*/
#include <iostream>
#include <iomanip>

int main() {
    // 定义变量
    double n, m;

    // 输入小明的金额和书的原价
    std::cin >> n >> m;

    // 计算打折后的价格
    double discountedPrice = m * 0.8;

    // 计算小明剩余的金额
    double remainingMoney = n - discountedPrice;

    // 输出结果，保留2位小数
    std::cout << std::fixed << std::setprecision(2) << remainingMoney << std::endl;

    return 0;
}
