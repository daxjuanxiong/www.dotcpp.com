#include <iostream>

int main() {
    // ���뱴�����������
    int invitationDay;
    std::cin >> invitationDay;

    // �жϾ����Ƿ��ܽ������벢������
    if (invitationDay == 1 || invitationDay == 3 || invitationDay == 5) {
        std::cout << "NO" << std::endl;
    } else {
        std::cout << "YES" << std::endl;
    }

    return 0;
}