#include <iostream>

int main() {
    // ����ӡ�С����ˡ��͡���������ƿ����
    int luckyCaps, encourageCaps;
    std::cin >> luckyCaps >> encourageCaps;

    // �ж��Ƿ���Զһ��󽱲�������
    if (luckyCaps >= 10 || encourageCaps >= 20) {
        std::cout << "1" << std::endl;
    } else {
        std::cout << "0" << std::endl;
    }

    return 0;
}
