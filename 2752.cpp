
//����1��c����ʵ��
#include <stdio.h>

int main() {
    int i;
    short s;

    printf("%lu %lu\n", sizeof(i), sizeof(s));

    return 0;
}
//����2��c++����ʵ��

#include <iostream>

int main() {
    int i;
    short s;

    std::cout << sizeof(i) << " " << sizeof(s) << std::endl;

    return 0;
}
