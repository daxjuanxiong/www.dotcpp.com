#include <iostream>
#include <cctype>

using namespace std;

// ���ַ�����ÿ�������ĸ������롰(max)��
string insertMaxString(string input) {
    char maxChar = 'A';  // ��ʼ��Ϊһ����С����ĸ

    // �ҵ������ĸ
    for (char c : input) {
        if (toupper(c) > maxChar) {
            maxChar = toupper(c);
        }
    }

    // ��ÿ�������ĸ������롰(max)��
    for (size_t i = 0; i < input.length(); ++i) {
        if (toupper(input[i]) == maxChar) {
            input.insert(i + 1, "(max)");
            i += 5;  // ��������ġ�(max)������
        }
    }
    return input;
}

int main() {
    string input;
    string out;
    // ��ȡ�������ʵ��
    while (getline(cin, input)) {
        out = insertMaxString(input);
        cout << out << endl;
    }

    return 0;
}
