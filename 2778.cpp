#include <iostream>

int main() {
    // 输入整数N
    int N;
    std::cin >> N;

    // 判断正负并输出结果
    if (N > 0) {
        std::cout << "positive" << std::endl;
    } else if (N == 0) {
        std::cout << "zero" << std::endl;
    } else {
        std::cout << "negative" << std::endl;
    }

    return 0;
}
