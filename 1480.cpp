#include <iostream>

int main() {
    // 输入两个整数和运算符
    int num1, num2;
    char op;
    std::cin >> num1 >> num2 >> op;

    // 根据运算符进行相应的计算并输出结果
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
            // 检查除数是否为0
            if (num2 != 0) {
                std::cout << num1 / num2 << std::endl;
            } else {
                std::cout << "Error: Division by zero" << std::endl;
            }
            break;
        case '%':
            // 检查除数是否为0
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
