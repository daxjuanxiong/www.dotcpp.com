#include <iostream>
#include <iomanip>

int main() {
    // �������
    double x, a, b, c, d;

    // ����x�Ͳ���ֵ
    std::cin >> x >> a >> b >> c >> d;

    // �������ʽf(x)��ֵ
    double result = a * x * x * x + b * x * x + c * x + d;

    // ��������������С�����7λ
    std::cout << std::fixed << std::setprecision(7) << result << std::endl;

    return 0;
}
