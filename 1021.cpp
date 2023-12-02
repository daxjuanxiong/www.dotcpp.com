#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double sqrtByIteration(double a) {
    // ��ʼ�²�ֵ
    double x = a;

    // �趨������ֵ
    double epsilon = 0.00001;

    // �������
    double x0;  // ���� x0 ����
    do {
        x0 = x;
        x = (x0 + a / x0) / 2;

    } while (fabs(x - x0) > epsilon);

    return x;
}

int main() {
    // �������ƽ��������
    double a;
    cin >> a;

    // ���ú������ƽ������������
    double result = sqrtByIteration(a);
    cout << fixed << setprecision(3) << result << endl;

    return 0;
}
