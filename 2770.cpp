/*
<cmath> 头文件中的 fmod 函数用于计算两个浮点数的余数。其函数原型如下：

cpp
Copy code
double fmod(double numer, double denom);
其中，numer 是被除数，denom 是除数。函数返回值是 numer / denom 的余数。

fmod 函数的计算规则是，返回 numer 除以 denom 的余数，
即 numer 对 denom 取模的结果。这个余数满足以下条件：
numer = k * denom + remainder，其中 k 是整数，而 0 <= remainder < |denom|。

例如，对于输入 fmod(73.263, 0.9973)，函数将返回 0.4601
，因为 73.263 = 73 * 0.9973 + 0.4601。这可以用来计算浮点数相除后的余数。
*/

#include <iostream>
#include<cmath>
int main() {
    // 定义变量
    double a, b;
 
    // 输入两个双精度浮点数
    std::cin >> a >> b;
 
    // 计算余数
    double remainder = fmod(a, b);
 
    // 输出结果
    std::cout << remainder << std::endl;
 
    return 0;
}