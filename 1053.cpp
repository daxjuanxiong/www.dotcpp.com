#include <iostream>
  
int main() {
    const int numCount = 10; // ����Ԫ�ظ���
  
    int numbers[numCount];  // �洢���������
    int sum = 0;            // �洢�ܺ�
  
  
    for (int i = 0; i < numCount; ++i) {
        std::cin >> numbers[i];
        sum += numbers[i];
    }
  
    // ����ƽ��ֵ
    double average = static_cast<double>(sum) / numCount;
  
    // ͳ�ƴ���ƽ��ֵ�ĸ���
    int aboveAverageCount = 0;
    for (int i = 0; i < numCount; ++i) {
        if (numbers[i] > average) {
            aboveAverageCount++;
        }
    }
  
    // ���ƽ��ֵ�ʹ���ƽ��ֵ�����ݸ���
    //std::cout <<  average << std::endl;
    std::cout << aboveAverageCount << std::endl;
  
    return 0;
}