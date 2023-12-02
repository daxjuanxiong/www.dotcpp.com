#include <iostream>

int main() {
    // 定义变量
    int x;

    // 输入小朋友的数量
    std::cin >> x;

    // 计算总票价
    int totalCost = x * 10;

    // 输出结果
    std::cout << x << " " << totalCost << std::endl;

    return 0;
}
