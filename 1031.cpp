/* 方法1*/
#include <stdio.h>
#include <string.h>

// 反序存放字符串的函数
void reverseString(char *str) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while (start < end) {
        // 交换字符串首尾字符
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // 移动索引
        ++start;
        --end;
    }
}

int main() {
    char inputString[1000000]; 
    scanf("%s", inputString);

    // 调用反序存放字符串的函数
    reverseString(inputString);

    // 输出反序后的字符串
    printf(" %s\n", inputString);

    return 0;
}
////////////////////////////////////////////////////////
/* 写法2，使用string类
#include <iostream>
#include <string>

// 反序字符串的函数
std::string reverseString(const std::string& input) {
    std::string reversed;

    // 从字符串末尾开始遍历，逐个字符添加到反序字符串中
    for (int i = input.length() - 1; i >= 0; --i) {
        reversed += input[i];
    }

    return reversed;
}

int main() {
    // 输入字符串
    std::string input;
    std::cin >> input;

    // 调用反序字符串的函数
    std::string reversed = reverseString(input);

    // 输出反序后的字符串
    std::cout << reversed << std::endl;

    return 0;
}
*/