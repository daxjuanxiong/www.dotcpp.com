#include <iostream>

int main() {
    // 定义变量
    int homework, quiz, finalExam;

    // 输入作业、小测和期末考试成绩
    std::cin >> homework >> quiz >> finalExam;

    // 计算总成绩
    // 按照题目描述，总成绩 = 作业成绩 × 20% + 小测成绩 × 30% + 期末考试成绩 × 50%
    int totalScore = static_cast<int>(homework * 0.2 + quiz * 0.3 + finalExam * 0.5);

    // 输出结果
    std::cout << totalScore << std::endl;

    return 0;
}

/*
使用 static_cast<int> 将浮点数结果转换为整数。这是因为题目中要求输出的是一个整数，
所以需要将浮点数结果转换为整数形式。

这样的转换通常用于取整操作，将浮点数部分去掉，只保留整数部分。
这种类型转换可能导致精度丢失，因为浮点数和整数的表示方式不同
在实际应用中，根据具体情况选择适当的类型转换方式是很重要的。
*/