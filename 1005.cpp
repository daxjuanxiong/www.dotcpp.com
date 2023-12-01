#include <iostream>
#include <iomanip> // 用于设置输出小数位数
 
int main() {
    // 获取用户输入的华氏温度
    double fahrenheit;
    std::cin >> fahrenheit;
 
    // 使用公式进行温度转换
    double celsius = 5 * (fahrenheit - 32) / 9;
 
    // 设置输出小数位数为两位
    std::cout << std::fixed << std::setprecision(2);
 
    // 输出摄氏温度
    std::cout << "c=" << celsius << std::endl;
 
    return 0;
}