#include <iostream>

int main() {
    // ����ֽ�ŵ�����
    std::string paperSize;

    // ����ֽ�ŵ�����
    std::cin >> paperSize;

    // ���� A0 ֽ�ŵĳ�ʼ��С
    int length = 1189;
    int width = 841;
    int t = 0;

    // ����ֽ�ŵ����Ƽ����С
    for (int i = 0; i < paperSize[1] - '0'; ++i) {
        // ���۹��̣�ȡ����
        t = width; // ����ƴд����
        width = length / 2;
        length = t; // ��������������
    }

    // ���ֽ�ŵĴ�С
    std::cout << length << std::endl;
    std::cout << width << std::endl;

    return 0;
}
