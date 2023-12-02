#include <iostream>
#include <cmath>

int main() {
    // 输入矩阵的维度
    int n;
    std::cin >> n;

    // 用于存储绝对值最大元素及其位置的变量
    int maxElement = 0;
    int maxRow = 0, maxCol = 0;

    // 动态分配二维数组，matrix是一个指向指针的指针
    int **matrix = new int*[n];
    for (int i = 0; i < n; i++) {
        // 对每一行动态分配内存，构成矩阵
        matrix[i] = new int[n];
    }

    // 输入矩阵元素
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cin >> matrix[i][j];

            // 找出绝对值最大的元素及其位置
            if (std::abs(matrix[i][j]) > std::abs(maxElement)) {
                maxElement = matrix[i][j];
                maxRow = i + 1;  // 行下标从1开始
                maxCol = j + 1;  // 列下标从1开始
            }
        }
    }

    // 输出结果
    std::cout << maxElement << " " << maxRow << " " << maxCol << std::endl;

    // 释放动态分配的内存
    for (int i = 0; i < n; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
/*
该程序动态分配了一个整数数组，并在使用后释放了内存。
#include <iostream>

int main() {
    // 动态分配整数数组，大小为5
    int *arr = new int[5];

    // 初始化数组元素
    for (int i = 0; i < 5; ++i) {
        arr[i] = i * 2;
    }

    // 输出数组元素
    std::cout << "数组元素：";
    for (int i = 0; i < 5; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // 释放动态分配的内存
    delete[] arr;

    return 0;
}
这个程序首先使用 new 运算符动态分配了一个包含5个整数的数组。
然后，通过循环初始化数组元素，并输出它们。
最后，使用 delete[] 运算符释放了动态分配的内存。
这是 new 和 delete 在C++中用于动态内存分配和释放的基本用法。
*/