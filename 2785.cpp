#include <iostream>

int main() {
    // ��������n
    int n;
    std::cin >> n;

    // �ж��Ƿ���ͬʱ��3��5������������
    if (n % 3 == 0 && n % 5 == 0) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
