#include <iostream>
#include <iomanip> // 用于设置输出精度

int main() {
    // 输入12个月的结余
    double balance[12];
    for (int i = 0; i < 12; ++i) {
        std::cin >> balance[i];
    }

    // 计算平均月末结余并输出结果，保留到小数点后第二位，并在最前面加一个"$"符
    double totalBalance = 0;
    for (int i = 0; i < 12; ++i) {
        totalBalance += balance[i];
    }
    double averageBalance = totalBalance / 12;
    std::cout << '$' << std::fixed << std::setprecision(2) << averageBalance << std::endl;

    return 0;
}
