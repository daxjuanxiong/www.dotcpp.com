#include <iostream>

int main() {
    // ��������N
    int N;
    std::cin >> N;

    // �ж�������������
    if (N > 0) {
        std::cout << "positive" << std::endl;
    } else if (N == 0) {
        std::cout << "zero" << std::endl;
    } else {
        std::cout << "negative" << std::endl;
    }

    return 0;
}
