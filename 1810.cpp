#include <iostream>
#include <iomanip>
 
int main() {
    // 定义变量
    char ch;
    int num;
    float floatNum;
    double doubleNum;
 
    // 输入数据
    std::cin >> ch >> num >> floatNum >> doubleNum;
 
    // 输出数据按指定格式
    std::cout << ch << " "
              << std::setw(4) << std::right << num << " "
              << std::fixed << std::setprecision(2) << floatNum << " "
              << std::fixed << std::setprecision(12) << doubleNum << std::endl;
 
    return 0;
}