#include <iostream>

int main() {
    // �������������
    int dividend, divisor;

    // ���뱻�����ͳ���
    std::cin >> dividend >> divisor;

    // ���������̺�����
    int quotient = dividend / divisor;
    int remainder = dividend % divisor;

    // ������
    std::cout << quotient << " " << remainder << std::endl;

    return 0;
}
