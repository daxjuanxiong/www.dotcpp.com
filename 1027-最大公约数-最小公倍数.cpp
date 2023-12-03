#include <iostream>

// �������Լ���ĺ���
int calculateGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// ������С�������ĺ���
int calculateLCM(int a, int b) {
    // ��С������ = (�����ĳ˻�) / ���Լ��
    return (a * b) / calculateGCD(a, b);
}

int main() {
    // ������������
    int num1, num2;
    std::cin >> num1;
    std::cin >> num2;

    // ���ü������Լ������С�������ĺ���
    int gcdResult = calculateGCD(num1, num2);
    int lcmResult = calculateLCM(num1, num2);

    // ������
    std::cout << gcdResult << std::endl;
    std::cout  << lcmResult << std::endl;

    return 0;
}
