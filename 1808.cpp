#include <iostream>
#include <iomanip>

int main() {
    // ���嵥���ȸ���������
    float num;

    // ���뵥���ȸ�����
    std::cin >> num;

    // ���������ʽ��������λС��
    std::cout << std::fixed << std::setprecision(3) << num << std::endl;

    return 0;
}
