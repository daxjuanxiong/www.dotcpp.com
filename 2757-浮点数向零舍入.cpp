#include <iostream>

int main() {
    // ���뵥���ȸ�����
    float floatValue;
    std::cin >> floatValue;

    // �������뵽����
    // ʹ��static_cast<int>(floatValue)�������ȸ�����ת��Ϊ������ʵ�����������Ч��
    int intValue = static_cast<int>(floatValue);

    // ������
    std::cout << intValue << std::endl;

    return 0;
}
