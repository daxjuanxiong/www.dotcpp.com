#include <iostream>

int main() {
    // ����һ���ַ�
    char inputChar;
    std::cin >> inputChar;

    // ��ȡ�ַ���ASCIIֵ
    int asciiValue = static_cast<int>(inputChar);

    // �ж�ASCIIֵ�Ƿ�Ϊ������������
    if (asciiValue % 2 == 1) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
