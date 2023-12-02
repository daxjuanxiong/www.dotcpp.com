#include <iostream>
#include <iomanip>

// 计算阶乘的函数
double fact(int k) {
    if (k == 0 || k == 1) {
        return 1.0;
    } else {
        return k * fact(k - 1);
    }
}

int main() {
    // 从标准输入读取一个正整数n
    int n;
    std::cin >> n;

    // 初始化和为0
    double sum = 0.0;

    // 计算1 + 1/2 + ... + 1/n!
    for (int i = 1; i <= n; ++i) {
        sum += 1.0 / fact(i);
    }

    // 输出结果到标准输出，保留五位小数
    std::cout << std::fixed << std::setprecision(5) << "sum=" << sum << std::endl;

    // 返回0表示程序成功运行
    return 0;
}
