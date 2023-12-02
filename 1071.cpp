#include <iostream>
#include <iomanip>

// ����׳˵ĺ���
double fact(int k) {
    if (k == 0 || k == 1) {
        return 1.0;
    } else {
        return k * fact(k - 1);
    }
}

int main() {
    // �ӱ�׼�����ȡһ��������n
    int n;
    std::cin >> n;

    // ��ʼ����Ϊ0
    double sum = 0.0;

    // ����1 + 1/2 + ... + 1/n!
    for (int i = 1; i <= n; ++i) {
        sum += 1.0 / fact(i);
    }

    // ����������׼�����������λС��
    std::cout << std::fixed << std::setprecision(5) << "sum=" << sum << std::endl;

    // ����0��ʾ����ɹ�����
    return 0;
}
