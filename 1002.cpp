#include <iostream>
 
int main() {
    // 声明变量用于存储用户输入的三个值
    double a, b, c;
    std::cin >> a >> b >> c;
 
    // 计算最大值
    double max_value = a;
 
    if (b > max_value) {
        max_value = b;
    }
 
    if (c > max_value) {
        max_value = c;
    }
 
    // 输出最大值
    std::cout << max_value << std::endl;
 
    return 0;
}