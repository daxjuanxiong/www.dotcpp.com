#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// �������ڼ��㷽�̸��������ͨ�����ò�������
void calculateRoots(double a, double b, double c) {
    double delta = b * b - 4 * a * c;
    double x1 = 0;
    double x2 = 0;
    if (delta > 0) {
        // ����ʵ����
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
	cout << "x1=" << x1 << " x2=" << x2 << endl;
    } else if (delta == 0) {
        // �ظ�
        x1 = x2 = -b / (2 * a);
	cout << "x1=" << x1 << " x2=" << x2 << endl;
    } else {
        // ������
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-delta) / (2 * a);
        x1 = realPart + imaginaryPart;
        x2 = realPart - imaginaryPart;
    cout << fixed << setprecision(3); // ����С�����3λ
	cout << "x1=" << realPart << "+" << imaginaryPart<<"i"<<" "
	      <<"x2=" <<  realPart << "-" << imaginaryPart<<"i"<<endl;
    }
}

int main() {
    double a, b, c;

    cin >> a >> b >> c;

    calculateRoots(a, b, c);

    return 0;
}