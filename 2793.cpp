#include <iostream>

int main() {
    // ��������(x, y)
    int x, y;
    std::cin >> x >> y;

    // �жϵ��Ƿ����������ڲ�������
    if (x >= -1 && x <= 1 && y >= -1 && y <= 1) {
        std::cout << "yes" << std::endl;
    } else {
        std::cout << "no" << std::endl;
    }

    return 0;
}
