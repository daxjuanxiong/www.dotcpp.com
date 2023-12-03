#include <iostream>

int main() {
    // 输入整数n
    int n;
    std::cin >> n;

    // 判断是否能同时被3和5整除并输出结果
    if (n % 3 == 0 && n % 5 == 0) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
