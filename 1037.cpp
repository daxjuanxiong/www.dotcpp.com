#include <iostream>

// ������εĺ꣬����a/b������
#define MODULO(a, b) (a % b)

int main() {
    int num1, num2;

    // ������������
    std::cin >> num1 >> num2;

    // ʹ�ú����a/b������
    int remainder = MODULO(num1, num2);

    // ������
    std::cout << remainder << std::endl;

    return 0;
}
