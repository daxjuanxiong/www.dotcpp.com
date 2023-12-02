#include <iostream>

int main() {
    // 从标准输入读取一个不大于5位的整数
    int number;
    std::cin >> number;

    // 初始化变量
    int temp = number;
    int count = 0;

    // 计算位数
    while (temp > 0) {
        temp /= 10;
        count++;
    }

    // 重新初始化 temp
    temp = number;

    // 输出位数
    std::cout << count << std::endl;
    int arr[5];
    // 输出每一位数字
    for (int i = 0; i < count; ++i) {
	arr[i] = temp%10;
        temp /= 10;
    }
    for (int i = count-1; i >= 0; --i) {
 
        std::cout << arr[i];
	if(i>0)
		std::cout<<" ";
    }
    std::cout << std::endl;
    for (int i = 0; i < count; ++i) {
 
        std::cout << arr[i];
    }
    std::cout << std::endl;

    // 返回0表示程序成功运行
    return 0;
}
