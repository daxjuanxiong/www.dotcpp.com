#include <iostream>

int main() {
    // ����������������ʾ�����߶εĳ���
    int a, b, c;
    std::cin >> a >> b >> c;

    // �ж��Ƿ��ܹ��������β�������
    if (a + b > c && a + c > b && b + c > a) {
        std::cout << "yes" << std::endl;
    } else {
        std::cout << "no" << std::endl;
    }

    return 0;
}
