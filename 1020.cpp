#include <iostream>

int main() {
    // 从标准输入读取N
    int N;
    std::cin >> N;

    // 初始化桃子数量
    int peach = 1;

    // 从第N天倒推到第1天
    for (int i = N; i > 1; --i) {
        peach = (peach + 1) * 2;
    }

    // 输出桃子总数到标准输出
    std::cout << peach << std::endl;

    // 返回0表示程序成功运行
    return 0;
}
