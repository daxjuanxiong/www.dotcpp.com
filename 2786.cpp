#include <iostream>

int main() {
    // 输入整数
    int num;
    std::cin >> num;

    // 判断能否被3、5、7整除并输出结果
    if (num % 3 == 0 && num % 5 == 0 && num % 7 == 0) {
        std::cout << "3 5 7" << std::endl;
    } else if (num % 3 == 0 && num % 5 == 0) {
        std::cout << "3 5" << std::endl;
    } else if (num % 3 == 0 && num % 7 == 0) {
        std::cout << "3 7" << std::endl;
    } else if (num % 5 == 0 && num % 7 == 0) {
        std::cout << "5 7" << std::endl;
    } else if (num % 3 == 0) {
        std::cout << "3" << std::endl;
    } else if (num % 5 == 0) {
        std::cout << "5" << std::endl;
    } else if (num % 7 == 0) {
        std::cout << "7" << std::endl;
    } else {
        std::cout << "n" << std::endl;
    }

    return 0;
}
