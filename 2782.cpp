#include <iostream>

int main() {
    // ������������x��y
    long long x, y;
    std::cin >> x >> y;

    // �Ƚϴ�С��������
    if (x > y) {
        std::cout << ">" << std::endl;
    } else if (x < y) {
        std::cout << "<" << std::endl;
    } else {
        std::cout << "=" << std::endl;
    }

    return 0;
}
