#include <iostream>
#include <iomanip>

int main() {
    // ����˫���ȸ���������
    double num;

    // ����˫���ȸ�����
    std::cin >> num;

    // ���������ʽ������12λС��
    std::cout << std::fixed << std::setprecision(12) << num << std::endl;

    return 0;
}
