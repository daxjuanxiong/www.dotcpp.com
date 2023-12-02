#include <iostream>

int main() {
    // 从标准输入读取一个数x
    int x;
    std::cin >> x;

    // 计算函数y的值
    int y;

    if (x < 1) {
        y = x;
    } else if (x < 10) {
        y = 2 * x - 1;
    } else {
        y = 3 * x - 11;
    }

    // 输出y到标准输出
    std::cout << y << std::endl;

    // 返回0表示程序成功运行
    return 0;
}
