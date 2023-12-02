#include <iostream>
#include <cctype>

using namespace std;

// 在字符串中每个最大字母后面插入“(max)”
string insertMaxString(string input) {
    char maxChar = 'A';  // 初始化为一个较小的字母

    // 找到最大字母
    for (char c : input) {
        if (toupper(c) > maxChar) {
            maxChar = toupper(c);
        }
    }

    // 在每个最大字母后面插入“(max)”
    for (size_t i = 0; i < input.length(); ++i) {
        if (toupper(input[i]) == maxChar) {
            input.insert(i + 1, "(max)");
            i += 5;  // 跳过插入的“(max)”部分
        }
    }
    return input;
}

int main() {
    string input;
    string out;
    // 读取多个测试实例
    while (getline(cin, input)) {
        out = insertMaxString(input);
        cout << out << endl;
    }

    return 0;
}
