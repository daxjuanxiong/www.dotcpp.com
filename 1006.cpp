#include <iostream>

int main() {
    int a, b, c;

    // �ӱ�׼�����ȡ��������
    std::cin >> a >> b >> c;

    // �ҳ�������
    int maxNumber = a;

    if (b > maxNumber) {
        maxNumber = b;
    }

    if (c > maxNumber) {
        maxNumber = c;
    }

    // �������������׼���
    std::cout << maxNumber << std::endl;

    // ����0��ʾ����ɹ�����
    return 0;
}
