#include <iostream>

int main() {
    // 输入重量和是否加急
    int weight;
    char express;
    std::cin >> weight >> express;

    // 计算基本费和超重费
    int baseFee = 8;
    int excessWeight = weight - 1000;
    int extraFee = 0;

    if (excessWeight > 0) {
        // 计算超重费
        extraFee = (excessWeight ) / 500 * 4;
        if (excessWeight%500!=0)
        {
            extraFee += 4;
        }
    }

    // 如果选择加急，多收5元
    if (express == 'y') {
        baseFee += 5;
    }

    // 输出总邮费
    std::cout << baseFee + extraFee << std::endl;

    return 0;
}