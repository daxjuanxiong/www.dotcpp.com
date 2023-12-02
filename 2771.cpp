#include <iostream>
#include <cmath>
#define PI 3.14159
int main() {
    // 定义变量
    int h, r;

    // 输入小圆桶的深和底面半径
    std::cin >> h >> r;

    // 计算一个圆桶最多能装多少水（单位：毫升）
    double maxVolume = PI * r * r * h;

    // 计算大象至少要喝多少桶水才能解渴
    int bucketsNeeded = static_cast<int>(std::ceil(20000.0 / maxVolume));

    // 输出结果
    std::cout << bucketsNeeded << std::endl;

    return 0;
}