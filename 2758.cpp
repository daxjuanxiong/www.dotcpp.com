#include <iostream>

int main() {
    // 输入一个除空格以外的可见字符
    char visibleChar;
    std::cin >> visibleChar;

    // 输出该字符的ASCII码
    int asciiCode = static_cast<int>(visibleChar);
//使用static_cast<int>(visibleChar)将输入的可见字符转换为其对应的ASCII码。
    // 输出结果
    std::cout << asciiCode << std::endl;

    return 0;
}
