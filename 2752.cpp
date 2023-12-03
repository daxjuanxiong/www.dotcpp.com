
//方法1：c语言实现
#include <stdio.h>

int main() {
    int i;
    short s;

    printf("%lu %lu\n", sizeof(i), sizeof(s));

    return 0;
}
//方法2：c++语言实现

#include <iostream>

int main() {
    int i;
    short s;

    std::cout << sizeof(i) << " " << sizeof(s) << std::endl;

    return 0;
}
