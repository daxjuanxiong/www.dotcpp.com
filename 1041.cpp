#include <iostream>
#include <iomanip>

// ���庯�����ҳ�������
double findMax(double a, double b, double c) {
    double maxVal = a;

    if (b > maxVal) {
        maxVal = b;
    }

    if (c > maxVal) {
        maxVal = c;
    }

    return maxVal;
}

// ������κ꣬�ҳ�������
#define FIND_MAX(a, b, c) ((a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c))


int main() {
    double num1, num2, num3;

    // ��������ʵ��
    std::cin >> num1 >> num2 >> num3;

    // ʹ�ú����ҳ������������
    double maxByFunction = findMax(num1, num2, num3);
    std::cout << std::fixed << std::setprecision(3) << maxByFunction << std::endl;

    // ʹ�ô��κ��ҳ������������
    double maxByMacro = FIND_MAX(num1, num2, num3);
    std::cout << std::fixed << std::setprecision(3) << maxByMacro << std::endl;

    return 0;
}
