#include <iostream>

int main() {
    // 从标准输入读取一个整数n
    int n;
    std::cin >> n;

    // 初始化变量，num用于存储当前位上的数字，sum用于存储Sn的值
    int num = 2;
    int sum = 0;

    // 使用循环计算Sn的值
    for (int i = 1; i <= n; ++i) {
        // 计算当前项的值，并累加到sum中
        sum += num;
        // 更新num，构建下一项的值
        num = num * 10 + 2;
    }

    // 输出计算结果到标准输出
    std::cout << sum << std::endl;

    // 返回0表示程序成功运行
    return 0;
}
