#include <iostream>
#include <stack>
#include <cstring>

using namespace std;

// �����������������ƥ��
string checkParentheses(const char* expression);

int main() {
    // ��ȡ����ı��ʽ
    char expression[255];
    cin.getline(expression);
    // ���ú����������ƥ�䲢������
    cout << checkParentheses(expression) << endl;

    return 0;
}

// �������壺�������ƥ��
string checkParentheses(const char* expression) {
    stack<char> parenthesesStack;

    // �������ʽ�ַ�
    for (int i = 0; i < strlen(expression); ++i) {
        if (expression[i] == '(') {
            // ���������ţ�ѹ��ջ
            parenthesesStack.push('(');
        } else if (expression[i] == ')') {
            // ���������ţ����ջ�Ƿ�Ϊ��
            if (!parenthesesStack.empty()) {
                // ջ��Ϊ�գ�����������
                parenthesesStack.pop();
            } else {
                // ջΪ�գ�������û��ƥ���������
                return "NO";
            }
        }
    }

    // ���ռ��ջ�Ƿ�Ϊ�գ�Ϊ��˵�����������Ŷ���ƥ���������
    return parenthesesStack.empty() ? "YES" : "NO";
}
