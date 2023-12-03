#include <iostream>

int main() {
    // 输入行走的距离
    int distance;
    std::cin >> distance;

    // 计算步行和骑车所需的时间
    double walkTime = distance / 1.2; // 步行每秒行走1.2米
    double bikeTime = 27.0 +23.0+ distance / 3.0; // 骑车总时间包括找车、开锁、骑车、停车、锁车

    // 判断骑车快还是走路快并输出结果
    if (walkTime < bikeTime) {
        std::cout << "Walk" << std::endl;
    } else if (walkTime > bikeTime) {
        std::cout << "Bike" << std::endl;
    } else {
        std::cout << "All" << std::endl;
    }

    return 0;
}
