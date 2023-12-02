#include <iostream>
#include <iomanip>

int main() {
    // 定义变量
    double x, a, b, c, d;

    // 输入x和参数值
    std::cin >> x >> a >> b >> c >> d;

    // 计算多项式f(x)的值
    double result = a * x * x * x + b * x * x + c * x + d;

    // 输出结果，保留到小数点后7位
    std::cout << std::fixed << std::setprecision(7) << result << std::endl;

    return 0;
}
