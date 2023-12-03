#include <iostream>
#include <cmath> // 包含头文件以使用 sqrt 函数
using namespace std;

// 判断素数的函数
bool isPrime(int num) {
    if (num <= 1) {
        return false; // 1 不是素数
    }

    int sqrtNum = sqrt(num); // 计算 num 的平方根

    for (int i = 2; i <= sqrtNum; ++i) {
        if (num % i == 0) {
            return false; // num 能被 i 整除，不是素数
        }
    }

    return true; // 如果上述条件都不满足，num 是素数
}

int main() {
    int number;

    cout << "输入一个整数: ";
    cin >> number;

    // 调用判断素数的函数
    if (isPrime(number)) {
        cout << "prime" << endl;
    } else {
        cout << "not prime" << endl;
    }

    return 0;
}
