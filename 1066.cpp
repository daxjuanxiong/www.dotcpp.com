#include <iostream>
#include <iomanip>
using namespace std;

// ����׳˵ĺ���
double fact(int n) {
    double result = 1.0;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

// ����x��n���ݵĺ���
double mypow(double x, int n) {
    double result = 1.0;
    for (int i = 0; i < n; ++i) {
        result *= x;
    }
    return result;
}

int main() {
    double x;
    int n;
    cin >> x >> n;

    double sum = 0.0;
    for (int i = 1; i <= n; ++i) {
        double term = mypow(-1, i - 1) * mypow(x, i) / fact(i);
        sum += term;
    }

    // ������������4λС��
    cout << fixed << setprecision(4) << sum << endl;

    return 0;
}
