#include <iostream>

int main() {
    // ����һ��������
    int number;
    std::cin >> number;

    // �ж��Ƿ�����λ����������
    if (number >= 10 && number <= 99) {
        std::cout << "1" << std::endl;
    } else {
        std::cout << "0" << std::endl;
    }

    return 0;
}
