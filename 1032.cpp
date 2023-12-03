/*方法1*/
#include <iostream>

// 计算字符串长度的函数
int calculateLength(const char* str) {
    int len = 0;
    while (str[len] != '\0') {
        ++len;
    }
    return len;
}

// 连接两个字符串的函数
char* concatenateStrings(const char* str1, const char* str2) {
    // 计算两个字符串的长度
    int len1 = calculateLength(str1);
    int len2 = calculateLength(str2);

    // 分配足够的内存用于存储连接后的字符串
    char* result = new char[len1 + len2 + 1];

    // 复制第一个字符串到结果字符串
    for (int i = 0; i < len1; ++i) {
        result[i] = str1[i];
    }

    // 追加第二个字符串到结果字符串
    for (int i = 0; i < len2; ++i) {
        result[len1 + i] = str2[i];
    }

    // 添加字符串结束符
    result[len1 + len2] = '\0';

    return result;
}

int main() {
    // 输入两个字符串
    char str1[100], str2[100];
    std::cin >> str1;
    std::cin >> str2;

    // 调用连接字符串的函数
    char* concatenated = concatenateStrings(str1, str2);

    // 输出连接后的字符串
    std::cout  << concatenated << std::endl;

    // 释放内存
    delete[] concatenated;

    return 0;
}




/*方法2*/
#include <iostream>
#include <cstring>

// 连接两个字符串的函数
char* concatenateStrings(const char* str1, const char* str2) {
    // 计算两个字符串的长度
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // 分配足够的内存用于存储连接后的字符串
    char* result = new char[len1 + len2 + 1];

    // 复制第一个字符串到结果字符串
    strcpy(result, str1);

    // 追加第二个字符串到结果字符串
    strcat(result, str2);

    return result;
}

int main() {
    // 输入两个字符串
    char str1[10000], str2[10000];
    std::cin >> str1;

    std::cin >> str2;

    // 调用连接字符串的函数
    char* concatenated = concatenateStrings(str1, str2);

    // 输出连接后的字符串
    std::cout << concatenated << std::endl;

    // 释放内存
    delete[] concatenated;

    return 0;
}

/*
方法1：使用string类
#include <iostream>
#include <string>

// 连接两个字符串的函数
std::string concatenateStrings(const std::string& str1, const std::string& str2) {
    return str1 + str2;
}

int main() {
    // 输入两个字符串
    std::string str1, str2;
    std::cin >> str1;;
    std::cin >> str2;

    // 调用连接两个字符串的函数
    std::string result = concatenateStrings(str1, str2);

    // 输出连接后的字符串
    std::cout << result << std::endl;

    return 0;
}
*/