#include <iostream>
#include <iomanip>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;

    double sum1 = 0, sum2 = 0, sum3 = 0;

    // 1~a֮��
    for (int i = 1; i <= a; ++i) {
        sum1 += i;
    }

    // 1~b��ƽ����
    for (int i = 1; i <= b; ++i) {
        sum2 += i * i;
    }

    // 1~c�ĵ�����
    for (int i = 1; i <= c; ++i) {
        sum3 += 1.0 / i;
    }

    // ��������������λС��
    std::cout << std::fixed << std::setprecision(2) << sum1 + sum2 + sum3 << std::endl;

    return 0;
}
