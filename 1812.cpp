#include <iostream>

int main() {
    // 定义字符变量
    char symbol;

    // 输入字符
    std::cin >> symbol;

    // 输出等腰三角形
    for (int i = 0; i < 3; ++i) {
        // 打印等腰三角形每行前面的空格，空格数随着行数增加而减少
        for (int j = 0; j < 2 - i; ++j) {
            std::cout << ' ';
        }

        // 打印等腰三角形每行的字符，字符数随着行数增加而增加
        for (int k = 0; k < 2 * i + 1; ++k) {
            std::cout << symbol;
        }

        // 换行，移动到下一行
        std::cout << std::endl;
    }

    return 0;
}
