#include <iostream>
#include <cmath>

int main() {
    // �������
    int n, x, y;

    // ����ƻ�����������ӳ�һ��ƻ������ʱ��;�����ʱ��
    std::cin >> n >> x >> y;

    // ����ʣ�������ƻ������
    int remainingApples = n - ceil(double(y) / x);

    // ������
    std::cout << remainingApples << std::endl;

    return 0;
}