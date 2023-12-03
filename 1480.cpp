#include <iostream>

int main() {
    // �������������������
    int num1, num2;
    char op;
    std::cin >> num1 >> num2 >> op;

    // ���������������Ӧ�ļ��㲢������
    switch (op) {
        case '+':
            std::cout << num1 + num2 << std::endl;
            break;
        case '-':
            std::cout << num1 - num2 << std::endl;
            break;
        case '*':
            std::cout << num1 * num2 << std::endl;
            break;
        case '/':
            // �������Ƿ�Ϊ0
            if (num2 != 0) {
                std::cout << num1 / num2 << std::endl;
            } else {
                std::cout << "Error: Division by zero" << std::endl;
            }
            break;
        case '%':
            // �������Ƿ�Ϊ0
            if (num2 != 0) {
                std::cout << num1 % num2 << std::endl;
            } else {
                std::cout << "Error: Modulo by zero" << std::endl;
            }
            break;
        default:
            std::cout << "Invalid operator" << std::endl;
    }

    return 0;
}
