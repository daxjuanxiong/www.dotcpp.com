#include <iostream>

int main() {
    // ��������n
    int n;
    std::cin >> n;

    // �ж���ż��������
    if (n % 2 == 0) {
        std::cout << "even" << std::endl;
    } else {
        std::cout << "odd" << std::endl;
    }

    return 0;
}
