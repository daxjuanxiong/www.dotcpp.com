#include <iostream>
#include <iomanip>

int main() {
    // �������
    float r1, r2;

    // ���������������ֵ
    std::cin >> r1 >> r2;

    // ���㲢��������ֵ
    float parallelResistance = 1 / (1 / r1 + 1 / r2);

    // ��������������С�����2λ
    std::cout << std::fixed << std::setprecision(2) << parallelResistance << std::endl;

    return 0;
}
