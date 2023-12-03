#include <iostream>

int main() {
    // 输入两个整数x和y
    long long x, y;
    std::cin >> x >> y;

    // 比较大小并输出结果
    if (x > y) {
        std::cout << ">" << std::endl;
    } else if (x < y) {
        std::cout << "<" << std::endl;
    } else {
        std::cout << "=" << std::endl;
    }

    return 0;
}
