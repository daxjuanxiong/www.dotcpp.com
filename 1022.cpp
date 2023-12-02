#include <iostream>
#include <cmath>

using namespace std;

// 判断一个数是否是素数
bool isPrime(int num) {
    // 1和负数不是素数
    if (num <= 1) {
        return false;
    }

    // 判断是否有小于等于sqrt(num)的因子
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            return false;  // 有因子，不是素数
        }
    }

    return true;  // 没有因子，是素数
}

int main() {
    int num;
    cin >> num;
    for(int i = 2;i<=num;i++)
    {
    if (isPrime(i)) {
        cout << i << endl;
    } 
    }

    return 0;
}