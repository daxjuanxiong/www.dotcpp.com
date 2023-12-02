#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double sqrtByIteration(double a) {
    // 初始猜测值
    double x = a;

    // 设定精度阈值
    double epsilon = 0.00001;

    // 迭代求解
    double x0;  // 声明 x0 变量
    do {
        x0 = x;
        x = (x0 + a / x0) / 2;

    } while (fabs(x - x0) > epsilon);

    return x;
}

int main() {
    // 输入待求平方根的数
    double a;
    cin >> a;

    // 调用函数求解平方根并输出结果
    double result = sqrtByIteration(a);
    cout << fixed << setprecision(3) << result << endl;

    return 0;
}
