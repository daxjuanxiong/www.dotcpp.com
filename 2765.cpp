#include <iostream>
#include <iomanip> // ���������������

int main() {
    // �������
    int a, b;

    // ��ȡ����
    std::cin >> a >> b;

    // ���㸡����ֵ
    double result = static_cast<double>(a) / b;

    // ����������ȣ�����С�����9λ
    std::cout << std::fixed << std::setprecision(9) << result << std::endl;

    return 0;
}