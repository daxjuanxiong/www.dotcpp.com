#include <iostream>
#include <iomanip> // ���������������

int main() {
    // ���븡����N
    double N;
    std::cin >> N;

    // ����ֶκ���ֵ��������
    double result;
    if (N >= 0 && N < 5) {
        result = -N + 2.5;
    } else if (N >= 5 && N < 10) {
        result = 2 - 1.5 * (N - 3) * (N - 3);
    } else if (N >= 10 && N < 20) {
        result = N / 2 - 1.5;
    } 
    // ��������������С�������λ
    std::cout << std::fixed << std::setprecision(3) << result << std::endl;

    return 0;
}
