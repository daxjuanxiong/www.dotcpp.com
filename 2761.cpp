
#include <iostream>

int main() {
    // 定义字符串
    const char arr[] = "Hello, World!";// arr是一个数组

    // 使用sizeof函数获取字符串的大小
    std::cout << sizeof(arr) << std::endl;//14个字节，包含'\0'

    return 0;
}
// sizeof 的使用方法：
#include <iostream>

int main() {
    // 示例：sizeof用于基本数据类型

    // 输出 int 数据类型的大小（字节数）
    std::cout << "Size of int: " << sizeof(int) << " bytes" << std::endl;

    // 输出 double 数据类型的大小（字节数）
    std::cout << "Size of double: " << sizeof(double) << " bytes" << std::endl;

    // 输出 char 数据类型的大小（字节数）
    std::cout << "Size of char: " << sizeof(char) << " bytes" << std::endl;

    return 0;
}
