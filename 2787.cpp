#include <iostream>

int main() {
    // 输入语文和数学成绩
    int chineseScore, mathScore;
    std::cin >> chineseScore >> mathScore;

    // 判断是否恰好有一门课不及格并输出结果
    if ((chineseScore < 60 && mathScore >= 60) || (chineseScore >= 60 && mathScore < 60)) {
        std::cout << "1" << std::endl;
    } else {
        std::cout << "0" << std::endl;
    }

    return 0;
}
