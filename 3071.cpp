#include <iostream>
#include <stack>
#include <cstring>

using namespace std;

// 函数声明：检查括号匹配
string checkParentheses(const char* expression);

int main() {
    // 读取输入的表达式
    char expression[255];
    cin.getline(expression);
    // 调用函数检查括号匹配并输出结果
    cout << checkParentheses(expression) << endl;

    return 0;
}

// 函数定义：检查括号匹配
string checkParentheses(const char* expression) {
    stack<char> parenthesesStack;

    // 遍历表达式字符
    for (int i = 0; i < strlen(expression); ++i) {
        if (expression[i] == '(') {
            // 遇到左括号，压入栈
            parenthesesStack.push('(');
        } else if (expression[i] == ')') {
            // 遇到右括号，检查栈是否为空
            if (!parenthesesStack.empty()) {
                // 栈不为空，弹出左括号
                parenthesesStack.pop();
            } else {
                // 栈为空，右括号没有匹配的左括号
                return "NO";
            }
        }
    }

    // 最终检查栈是否为空，为空说明所有左括号都有匹配的右括号
    return parenthesesStack.empty() ? "YES" : "NO";
}
