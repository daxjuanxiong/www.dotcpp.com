#include <iostream>
#include <iomanip>

int main() {
    // 从标准输入读取N
    int N;
    std::cin >> N;

    // 初始化分数序列的前两项
    double a = 2.0, b = 1.0;
    double sum = 0.0;

    // 计算数列的前N项之和
    for (int i = 0; i < N; ++i) {
        sum += a / b;
        // 计算下一项
        double temp = a;
        a = a + b;
        b = temp;
    }

    // 输出结果到标准输出，保留两位小数
    std::cout << std::fixed << std::setprecision(2) << sum << std::endl;

    // 返回0表示程序成功运行
    return 0;
}
/*
程序通过循环计算数列的每一项，并累加到总和中。
在循环中，使用变量 a 和 b 分别表示分数序列的分子和分母，
每次迭代更新这两个变量以计算下一项。
最后，输出结果到标准输出，保留两位小数。
*/