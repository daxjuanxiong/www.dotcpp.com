#include <iostream>
#include <cmath>
#define PI 3.14159
int main() {
    // �������
    int h, r;

    // ����СԲͰ����͵���뾶
    std::cin >> h >> r;

    // ����һ��ԲͰ�����װ����ˮ����λ��������
    double maxVolume = PI * r * r * h;

    // �����������Ҫ�ȶ���Ͱˮ���ܽ��
    int bucketsNeeded = static_cast<int>(std::ceil(20000.0 / maxVolume));

    // ������
    std::cout << bucketsNeeded << std::endl;

    return 0;
}