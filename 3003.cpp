#include <iostream>

int main() {
    // 定义变量
    int heads, legs;

    // 输入头和脚的数量
    std::cin >> heads >> legs;

    // 计算鸡和兔的数量
    // 设鸡的数量为chickens，兔的数量为rabbits
    // 根据题目，头的数量和脚的数量应该满足以下关系：
    // 2*chickens + 4*rabbits = legs
    // chickens + rabbits = heads
    // 解方程组得到鸡和兔的数量
    int chickens = (4 * heads - legs) / 2;
    int rabbits = heads - chickens;

    // 输出结果
    std::cout << chickens << " " << rabbits << std::endl;

    return 0;
}
