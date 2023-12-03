#include <iostream>

int main() {
    // 输入单精度浮点数
    float floatValue;
    std::cin >> floatValue;

    // 向零舍入到整数
    // 使用static_cast<int>(floatValue)将单精度浮点数转换为整数，实现向零舍入的效果
    int intValue = static_cast<int>(floatValue);

    // 输出结果
    std::cout << intValue << std::endl;

    return 0;
}
