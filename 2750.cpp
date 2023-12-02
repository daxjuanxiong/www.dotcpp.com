#include <iostream>

int main() {
    // 定义输入字符
    char ch;

    // 输入字符
    std::cin >> ch;

    const int num = 5;
    int med = num / 2 + 1;

    for (int i = 1; i <= num; i++) {
        int cha = std::abs(i - med);

        for (int j = 1; j <= cha; j++) {
            std::cout << " ";
        }

        for (int k = 1; k <= num - 2 * cha; k++) {
            std::cout << ch;
        }

        std::cout << std::endl;
    }

    return 0;
}
