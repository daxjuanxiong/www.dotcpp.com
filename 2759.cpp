#include <iostream>

int main() {
    // ����ASCII��
    int asciiCode;
    std::cin >> asciiCode;

    // ��ASCII��ת��Ϊ�ַ�
    char character = static_cast<char>(asciiCode);

    // �����Ӧ���ַ�
    std::cout << character << std::endl;

    return 0;
}
/*
�������ͨ��ʹ��static_cast<char>(asciiCode)�������ASCII��ת��Ϊ�ַ���
��������������Խ���δ��븴�Ƶ�һ��C++�����������У�
����һ��������ASCII�룩�����������Ӧ���ַ���
*/