#include <iostream>
#include <vector>

using namespace std;

// 全局变量，用于记录总共需要补发的糖果数
int total = 0;

// 函数定义：判断数组的所有元素是否相等
bool areAllElementsEqual(const int arr[], size_t size) {
    // 遍历数组，判断是否所有元素都等于第一个元素
    for (size_t i = 1; i < size; ++i) {
        if (arr[i] != arr[0]) {
            return false; // 只要找到一个不相等的元素就返回false
        }
    }
    return true; // 如果遍历完数组所有元素都相等，则返回true
}

// 函数定义：判断一个整数是奇数还是偶数
bool checkOddEven(int num) {
    // 使用条件运算符判断奇偶性并返回结果
    return (num % 2 == 0) ? true : false;
}

// 函数定义：将一个数组的元素循环向左移动
void rotateArrayLeft(int * arr, int N) {
    int temp = arr[0] / 2;
    arr[0] = arr[0] / 2;
    
    // 循环移动数组元素
    for (int i = 0; i < N; ++i) {
        if (i != N - 1) {
            arr[i] += arr[i + 1] / 2;
            arr[i + 1] = arr[i + 1] / 2;
        } else {
            arr[i] += temp;
        }
    }

    // 检查并补发糖果使其变成偶数
    for (int i = 0; i < N; ++i) {
        bool flag = checkOddEven(arr[i]);
        if (!flag) {
            arr[i] += 1;
            total += 1;
        }
    }
}

int main() {
    // 读入小朋友的人数
    int N;
    cin >> N;

    // 读入每个小朋友初始的糖果数
    int candies[N];
    for (int i = 0; i < N; ++i) {
        cin >> candies[i];
    }

    // 循环执行数组元素循环移动，直到所有元素相等
    while (!areAllElementsEqual(candies, N)) {
        rotateArrayLeft(candies, N);
    }

    // 输出老师需要补发的糖果数
    cout << total << endl;

    return 0;
}
