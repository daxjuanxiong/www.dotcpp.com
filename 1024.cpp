#include <iostream>

int main() {
    // 从标准输入读取3x3矩阵
    int matrix[3][3];

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    // 计算主对角线元素之和
    int mainDiagonalSum = 0;
    for (int i = 0; i < 3; ++i) {
        mainDiagonalSum += matrix[i][i];
    }

    // 计算副对角线元素之和
    int secondaryDiagonalSum = 0;
    for (int i = 0; i < 3; ++i) {
        secondaryDiagonalSum += matrix[i][2 - i];
    }

    // 输出结果到标准输出
    std::cout << mainDiagonalSum << " " << secondaryDiagonalSum << std::endl;

    // 返回0表示程序成功运行
    return 0;
}
