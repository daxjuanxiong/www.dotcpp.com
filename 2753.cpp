/*
分别定义了一个float类型的变量和一个double类型的变量，
然后使用sizeof函数获取它们的存储空间大小，
并通过std::cout输出这两个大小，用一个空格隔开。
在C++中，sizeof返回的是字节数，所以直接输出即可。
*/
#include <iostream>

int main() {
    float f;
    double d;

    std::cout << sizeof(f) << " " << sizeof(d) << std::endl;

    return 0;
}
