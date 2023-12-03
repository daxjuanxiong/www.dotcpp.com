#include <iostream>

int main() {
    // 输入三个正整数表示三条线段的长度
    int a, b, c;
    std::cin >> a >> b >> c;

    // 判断是否能构成三角形并输出结果
    if (a + b > c && a + c > b && b + c > a) {
        std::cout << "yes" << std::endl;
    } else {
        std::cout << "no" << std::endl;
    }

    return 0;
}
