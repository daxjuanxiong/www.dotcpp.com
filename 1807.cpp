#include <iostream>
#include <iomanip>

int main() {
    // ����������������
    int a, b, c;

    // ������������
    std::cin >> a >> b >> c;

    // ����ʽ���
    std::cout << std::left << std::setw(8) << a
              << std::left << std::setw(8) << b
              << std::left << std::setw(8) << c << std::endl;

    return 0;
}
