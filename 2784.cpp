#include <iostream>

int main() {
    // 输入印有“幸运”和“鼓励”的瓶盖数
    int luckyCaps, encourageCaps;
    std::cin >> luckyCaps >> encourageCaps;

    // 判断是否可以兑换大奖并输出结果
    if (luckyCaps >= 10 || encourageCaps >= 20) {
        std::cout << "1" << std::endl;
    } else {
        std::cout << "0" << std::endl;
    }

    return 0;
}
