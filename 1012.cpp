#include <iostream>
#include <cctype>

int main() {
    // 定义计数变量
    int letterCount = 0, digitCount = 0, spaceCount = 0, otherCount = 0;
    
    // 从标准输入读取一行字符
    std::string input;
    std::getline(std::cin, input);

    // 遍历输入的每个字符
    for (char ch : input) {
        if (isalpha(ch)) {
            // 判断是否为英文字母
            letterCount++;
        } else if (isdigit(ch)) {
            // 判断是否为数字
            digitCount++;
        } else if (isspace(ch)) {
            // 判断是否为空格
            spaceCount++;
        } else {
            // 其他字符
            otherCount++;
        }
    }

    // 输出统计结果到标准输出
    std::cout << letterCount << " " << digitCount << " " << spaceCount << " " << otherCount << std::endl;

    // 返回0表示程序成功运行
    return 0;
}
