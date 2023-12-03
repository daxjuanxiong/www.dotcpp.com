#include <iostream>
#include <cmath> // 包含用于绝对值计算的头文件
#include<iomanip>

int main() {
    // 输入浮点数
    double inputFloat;
    std::cin >> inputFloat;

    // 计算绝对值
    double absoluteValue = std::abs(inputFloat);

    // 输出结果，保留到小数点后两位
    std::cout << std::fixed << std::setprecision(2) << absoluteValue << std::endl;

    return 0;
}

/*
iomanip 是 C++ 中用于处理输入输出格式的头文件。它提供了一些用于格式化输出的工具，
其中包括 std::setprecision、std::setw、std::fixed 等。

在上面的例子中，我们使用了 std::fixed 和 std::setprecision(2) 来设置输出的格式。具体说明如下：

std::fixed：设置浮点数输出格式为固定小数点表示法，即小数点后有固定位数的数字。
std::setprecision(2)：设置浮点数输出的小数点后位数为2。
这两个设置一起使用，确保输出的浮点数保留两位小数。

以下是一个简单的例子，演示了 iomanip 的使用：


#include <iostream>
#include <iomanip>

int main() {
    double pi = 3.141592653589793;

    // 使用 std::fixed 和 std::setprecision(2) 格式化输出
    std::cout << "Default Format: " << pi << std::endl;
    std::cout << "Fixed Format with Precision 2: " 
	<< std::fixed << std::setprecision(2) << pi << std::endl;

    return 0;
}

*/
