#include <iostream>

int main() {
    // 定义变量
    int a1, a2, n;

    // 输入前两项和n
    std::cin >> a1 >> a2 >> n;

    // 计算公差
    int d = a2 - a1;

    // 计算第n项的值
    int an = a1 + (n - 1) * d;

    // 输出结果
    std::cout << an << std::endl;

    return 0;
}
