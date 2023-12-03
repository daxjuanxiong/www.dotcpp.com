#include <iostream>
#include <iomanip> // 用于设置输出精度

int main() {
    // 输入浮点数N
    double N;
    std::cin >> N;

    // 计算分段函数值并输出结果
    double result;
    if (N >= 0 && N < 5) {
        result = -N + 2.5;
    } else if (N >= 5 && N < 10) {
        result = 2 - 1.5 * (N - 3) * (N - 3);
    } else if (N >= 10 && N < 20) {
        result = N / 2 - 1.5;
    } 
    // 输出结果，保留到小数点后三位
    std::cout << std::fixed << std::setprecision(3) << result << std::endl;

    return 0;
}
