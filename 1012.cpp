#include <iostream>
#include <cctype>

int main() {
    // �����������
    int letterCount = 0, digitCount = 0, spaceCount = 0, otherCount = 0;
    
    // �ӱ�׼�����ȡһ���ַ�
    std::string input;
    std::getline(std::cin, input);

    // ���������ÿ���ַ�
    for (char ch : input) {
        if (isalpha(ch)) {
            // �ж��Ƿ�ΪӢ����ĸ
            letterCount++;
        } else if (isdigit(ch)) {
            // �ж��Ƿ�Ϊ����
            digitCount++;
        } else if (isspace(ch)) {
            // �ж��Ƿ�Ϊ�ո�
            spaceCount++;
        } else {
            // �����ַ�
            otherCount++;
        }
    }

    // ���ͳ�ƽ������׼���
    std::cout << letterCount << " " << digitCount << " " << spaceCount << " " << otherCount << std::endl;

    // ����0��ʾ����ɹ�����
    return 0;
}
