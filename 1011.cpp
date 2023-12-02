#include <iostream>

// 计算最大公约数的函数
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
/*
辗转相除法（Euclidean Algorithm），也称为欧几里德算法。其原理基于以下观察：

如果 a 能整除 b，那么 b 就是最大公约数。
如果 a 不能整除 b，那么 a 除以 b 的余数 r，b 和 r 的最大公约数就是 a 和 b 的最大公约数。
算法步骤如下：

计算 a 除以 b 的余数，将结果赋值给 r。
将 b 的值赋值给 a，将 r 的值赋值给 b。
重复上述步骤，直到 b 变为零。此时，a 的值即为最大公约数。
这是一个递归的过程，通过不断取余的操作，直到找到能整除的最小值，这个最小值就是最大公约数。

例如，对于输入 a = 48 和 b = 18：

第一步：48 % 18 = 12，更新 a = 18，b = 12。
第二步：18 % 12 = 6，更新 a = 12，b = 6。
第三步：12 % 6 = 0，此时 b 变为零，算法结束。最大公约数为 a = 6。
这个算法非常有效，具有良好的时间复杂度。
*/

// 计算最小公倍数的函数
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}
/*
两个整数 a 和 b 的最小公倍数等于它们的乘积除以它们的最大公约数。
gcd(a, b) 是调用先前定义的计算最大公约数的函数。
该函数首先计算两数之积 a * b，然后除以它们的最大公约数，得到最小公倍数。
*/
int main() {
    // 从标准输入读取两个正整数m和n
    int m, n;
    std::cin >> m >> n;

    // 计算最大公约数
    int maxCommonDivisor = gcd(m, n);

    // 计算最小公倍数
    int minCommonMultiple = lcm(m, n);

    // 输出结果到标准输出
    std::cout << maxCommonDivisor << " " << minCommonMultiple << std::endl;

    // 返回0表示程序成功运行
    return 0;
}
