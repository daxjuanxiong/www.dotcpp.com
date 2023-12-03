#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// 函数用于计算方程根，将结果通过引用参数返回
void calculateRoots(double a, double b, double c) {
    double delta = b * b - 4 * a * c;
    double x1 = 0;
    double x2 = 0;
    if (delta > 0) {
        // 两个实数根
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
	cout << "x1=" << x1 << " x2=" << x2 << endl;
    } else if (delta == 0) {
        // 重根
        x1 = x2 = -b / (2 * a);
	cout << "x1=" << x1 << " x2=" << x2 << endl;
    } else {
        // 复数根
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-delta) / (2 * a);
        x1 = realPart + imaginaryPart;
        x2 = realPart - imaginaryPart;
    cout << fixed << setprecision(3); // 设置小数点后3位
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