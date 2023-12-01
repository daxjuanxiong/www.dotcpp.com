#include <iostream>
 
int main() {
 
    for (int num = 100; num < 1000; ++num) {
        // 获取每位数字
        int digit1 = num / 100;     // 百位
        int digit2 = (num / 10) % 10; // 十位
        int digit3 = num % 10;      // 个位
 
        // 计算立方和
        int sum_of_cubes = digit1 * digit1 * digit1 + digit2 * digit2 * digit2 + digit3 * digit3 * digit3;
 
        // 判断是否为水仙花数并输出
        if (sum_of_cubes == num) {
            std::cout << num << std::endl;
        }
    }
 
    return 0;
}