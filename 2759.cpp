#include <iostream>

int main() {
    // 输入ASCII码
    int asciiCode;
    std::cin >> asciiCode;

    // 将ASCII码转换为字符
    char character = static_cast<char>(asciiCode);

    // 输出相应的字符
    std::cout << character << std::endl;

    return 0;
}
/*
这个程序通过使用static_cast<char>(asciiCode)将输入的ASCII码转换为字符，
并输出结果。你可以将这段代码复制到一个C++编译器中运行，
输入一个整数（ASCII码），程序将输出相应的字符。
*/