#include <iostream>
#include <iomanip>  // 用于设置输出精度
#include<cmath>
using namespace std;

int main() {
    // 读取输入的半径
    double radius;
    cin >> radius;

    // 计算圆的面积
    double area = M_PI* radius * radius;

    // 输出面积，保留两位小数
    cout << fixed << setprecision(2)<< area << endl;

    return 0;
}