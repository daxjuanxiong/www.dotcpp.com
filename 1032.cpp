/*����1*/
#include <iostream>

// �����ַ������ȵĺ���
int calculateLength(const char* str) {
    int len = 0;
    while (str[len] != '\0') {
        ++len;
    }
    return len;
}

// ���������ַ����ĺ���
char* concatenateStrings(const char* str1, const char* str2) {
    // ���������ַ����ĳ���
    int len1 = calculateLength(str1);
    int len2 = calculateLength(str2);

    // �����㹻���ڴ����ڴ洢���Ӻ���ַ���
    char* result = new char[len1 + len2 + 1];

    // ���Ƶ�һ���ַ���������ַ���
    for (int i = 0; i < len1; ++i) {
        result[i] = str1[i];
    }

    // ׷�ӵڶ����ַ���������ַ���
    for (int i = 0; i < len2; ++i) {
        result[len1 + i] = str2[i];
    }

    // ����ַ���������
    result[len1 + len2] = '\0';

    return result;
}

int main() {
    // ���������ַ���
    char str1[100], str2[100];
    std::cin >> str1;
    std::cin >> str2;

    // ���������ַ����ĺ���
    char* concatenated = concatenateStrings(str1, str2);

    // ������Ӻ���ַ���
    std::cout  << concatenated << std::endl;

    // �ͷ��ڴ�
    delete[] concatenated;

    return 0;
}




/*����2*/
#include <iostream>
#include <cstring>

// ���������ַ����ĺ���
char* concatenateStrings(const char* str1, const char* str2) {
    // ���������ַ����ĳ���
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // �����㹻���ڴ����ڴ洢���Ӻ���ַ���
    char* result = new char[len1 + len2 + 1];

    // ���Ƶ�һ���ַ���������ַ���
    strcpy(result, str1);

    // ׷�ӵڶ����ַ���������ַ���
    strcat(result, str2);

    return result;
}

int main() {
    // ���������ַ���
    char str1[10000], str2[10000];
    std::cin >> str1;

    std::cin >> str2;

    // ���������ַ����ĺ���
    char* concatenated = concatenateStrings(str1, str2);

    // ������Ӻ���ַ���
    std::cout << concatenated << std::endl;

    // �ͷ��ڴ�
    delete[] concatenated;

    return 0;
}

/*
����1��ʹ��string��
#include <iostream>
#include <string>

// ���������ַ����ĺ���
std::string concatenateStrings(const std::string& str1, const std::string& str2) {
    return str1 + str2;
}

int main() {
    // ���������ַ���
    std::string str1, str2;
    std::cin >> str1;;
    std::cin >> str2;

    // �������������ַ����ĺ���
    std::string result = concatenateStrings(str1, str2);

    // ������Ӻ���ַ���
    std::cout << result << std::endl;

    return 0;
}
*/