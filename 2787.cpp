#include <iostream>

int main() {
    // �������ĺ���ѧ�ɼ�
    int chineseScore, mathScore;
    std::cin >> chineseScore >> mathScore;

    // �ж��Ƿ�ǡ����һ�ſβ�����������
    if ((chineseScore < 60 && mathScore >= 60) || (chineseScore >= 60 && mathScore < 60)) {
        std::cout << "1" << std::endl;
    } else {
        std::cout << "0" << std::endl;
    }

    return 0;
}
