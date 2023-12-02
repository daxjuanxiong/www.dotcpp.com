#include <iostream>

// 计算阶乘的函数
long factorial(int n) {
    // 基本情况：0的阶乘和1的阶乘均为1
    if (n == 0 || n == 1) {
        return 1;
    } else {
        // 递归调用：n的阶乘等于n乘以(n-1)的阶乘
        return n * factorial(n - 1);
    }
}

int main() {
    // 从标准输入读取一个整数n
    int n;
    std::cin >> n;

    // 用于存储阶乘和的变量
    long sum = 0;

    // 循环计算并累加1到n的阶乘
    for (int i = 1; i <= n; ++i) {
        sum += factorial(i);
    }

    // 输出计算结果到标准输出
    std::cout << sum << std::endl;

    // 返回0表示程序成功运行
    return 0;
}
