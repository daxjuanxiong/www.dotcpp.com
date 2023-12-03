#include <iostream>

int main() {
    // 输入一个字符
    char inputChar;
    std::cin >> inputChar;

    // 获取字符的ASCII值
    int asciiValue = static_cast<int>(inputChar);

    // 判断ASCII值是否为奇数并输出结果
    if (asciiValue % 2 == 1) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
