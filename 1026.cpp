#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 声明一个大小为10的整数数组
    int numbers[10];

    // 获取用户输入的十个整数
    for (int i = 0; i < 10; ++i) {
        cin >> numbers[i];
    }

    // 逆序输出
    for (int i = 9; i >= 0; --i) {
        cout << numbers[i] << " ";
    }

    return 0;
}
