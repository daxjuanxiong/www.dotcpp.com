#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double radius;

    // ѭ����ȡ��������
    while (std::cin >> radius) {
        // ����������
        double volume = (4.0 / 3.0) * M_PI * std::pow(radius, 3);

        // ��������������λС��
        std::cout << std::fixed << std::setprecision(3) << volume << std::endl;
    }

    return 0;
}
