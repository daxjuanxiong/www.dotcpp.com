#include <iostream>
#include <iomanip>
using namespace std;

// 计算阶乘的函数
double fact(int n) {
    double result = 1.0;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

// 计算x的n次幂的函数
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

    // 输出结果，保留4位小数
    cout << fixed << setprecision(4) << sum << endl;

    return 0;
}
