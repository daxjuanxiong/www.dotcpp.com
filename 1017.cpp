#include <iostream>
 
using namespace std;
 
// 判断一个数是否为完数
bool isPerfectNumber(int num) {
    int sum = 1; // 因子1必定是所有正整数的因子，所以初始化为1
 
    // 寻找因子
    for (int i = 2; i < num; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }
 
    return sum == num;
}
 
// 输出完数及其因子
void outputPerfectNumbers(int N) {
 
    for (int i = 2; i <= N; ++i) {
        if (isPerfectNumber(i)) {
            cout << i << " its factors are 1";
             
            for (int j = 2; j  < i; ++j) {
                if (i % j == 0) {
                    cout << " " << j;
                }
            }
 
            cout << endl;
        }
    }
}
 
int main() {
    int N;
    cin >> N;
 
    outputPerfectNumbers(N);
 
    return 0;
}