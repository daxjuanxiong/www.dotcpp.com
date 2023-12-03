#include <iostream>

// 定义函数，计算数组平均值
int calculateAverage(int* arr, int n) {
    int sum = 0;  // 用于存储数组元素之和的变量

    // 使用指针遍历数组并累加元素值
    for (int i = 0; i < n; ++i) {
        sum += *(arr + i);  // 使用指针访问数组元素，并将元素值累加到sum中
    }

    // 计算平均值并返回
    return static_cast<int>(sum) / n;  // 将元素和除以数组长度，得到平均值，使用static_cast进行类型转换
}

int main() {
    // 输入元素个数
    int n;
    std::cin >> n;

    // 分配动态数组
    int* arr = new int[n];  // 使用new运算符动态分配存储空间，创建大小为n的整数数组

    // 输入数组元素
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];  // 从标准输入读取元素值，将其存储到动态数组中
    }

    // 调用函数计算平均值并输出结果
    int average = calculateAverage(arr, n);  // 调用calculateAverage函数，传递动态数组和数组长度作为参数
    std::cout << average << std::endl;  // 输出计算得到的平均值到标准输出

    // 释放动态数组内存
    delete[] arr;  // 使用delete[]释放动态分配的数组内存

    return 0;  // 返回0，表示程序成功执行
}
