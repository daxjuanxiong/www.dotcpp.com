#include <iostream>
 
int main() {
    // 获取用户输入的5个字符
    char c1, c2, c3, c4, c5;
    std::cin >> c1 >> c2 >> c3 >> c4 >> c5;
 
    // 加密规律：用原来字母后面的第4个字母代替原来的字母
    c1 = c1 + 4;
    c2 = c2 + 4;
    c3 = c3 + 4;
    c4 = c4 + 4;
    c5 = c5 + 4;
 
    // 输出加密后的结果
    std::cout << c1 << c2 << c3 << c4 << c5 << std::endl;
 
    return 0;
}