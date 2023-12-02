#include <iostream>
#include <cmath>

int main() {
    // 定义变量
    int n, x, y;

    // 输入苹果数量、虫子吃一个苹果所需时间和经过的时间
    std::cin >> n >> x >> y;

    // 计算剩余的完整苹果数量
    int remainingApples = n - ceil(double(y) / x);

    // 输出结果
    std::cout << remainingApples << std::endl;

    return 0;
}