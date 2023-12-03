#include <iostream>

int main() {
    // 输入整数n
    int n;
    std::cin >> n;

    // 判断奇偶并输出结果
    if (n % 2 == 0) {
        std::cout << "even" << std::endl;
    } else {
        std::cout << "odd" << std::endl;
    }

    return 0;
}
