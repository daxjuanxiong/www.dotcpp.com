#include <iostream>

int main() {
    // 输入坐标(x, y)
    int x, y;
    std::cin >> x >> y;

    // 判断点是否在正方形内并输出结果
    if (x >= -1 && x <= 1 && y >= -1 && y <= 1) {
        std::cout << "yes" << std::endl;
    } else {
        std::cout << "no" << std::endl;
    }

    return 0;
}
