#include <iostream>
#include <iomanip>

int main() {
    // �ӱ�׼�����ȡN
    int N;
    std::cin >> N;

    // ��ʼ���������е�ǰ����
    double a = 2.0, b = 1.0;
    double sum = 0.0;

    // �������е�ǰN��֮��
    for (int i = 0; i < N; ++i) {
        sum += a / b;
        // ������һ��
        double temp = a;
        a = a + b;
        b = temp;
    }

    // ����������׼�����������λС��
    std::cout << std::fixed << std::setprecision(2) << sum << std::endl;

    // ����0��ʾ����ɹ�����
    return 0;
}
/*
����ͨ��ѭ���������е�ÿһ����ۼӵ��ܺ��С�
��ѭ���У�ʹ�ñ��� a �� b �ֱ��ʾ�������еķ��Ӻͷ�ĸ��
ÿ�ε������������������Լ�����һ�
�������������׼�����������λС����
*/