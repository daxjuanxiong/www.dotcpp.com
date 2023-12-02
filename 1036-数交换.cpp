#include <iostream>

// 定义带参的宏，实现两个参数值的互换
#define SWAP(x, y) { int temp = x; x = y; y = temp; }

int main() {
    int num1, num2;

    // 输入两个数
    std::cin >> num1 >> num2;

    // 使用宏交换两个数的值
    SWAP(num1, num2);

    // 输出交换后的两个数
    std::cout << num1 << " " << num2 << std::endl;

    return 0;
}
