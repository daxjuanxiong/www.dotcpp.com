#include <iostream>
  
int main() {
    const int numCount = 10; // 数组元素个数
  
    int numbers[numCount];  // 存储输入的整数
    int sum = 0;            // 存储总和
  
  
    for (int i = 0; i < numCount; ++i) {
        std::cin >> numbers[i];
        sum += numbers[i];
    }
  
    // 计算平均值
    double average = static_cast<double>(sum) / numCount;
  
    // 统计大于平均值的个数
    int aboveAverageCount = 0;
    for (int i = 0; i < numCount; ++i) {
        if (numbers[i] > average) {
            aboveAverageCount++;
        }
    }
  
    // 输出平均值和大于平均值的数据个数
    //std::cout <<  average << std::endl;
    std::cout << aboveAverageCount << std::endl;
  
    return 0;
}