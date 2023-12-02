#include <iostream>

using namespace std;

// 函数声明：计算阶乘
int factorial(int n);

int main() {
    // 读取输入的整数N
    int N;
    cin >> N;

    // 调用函数计算阶乘并输出结果
    cout << factorial(N) << endl;

    return 0;
}

// 函数定义：计算阶乘
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}