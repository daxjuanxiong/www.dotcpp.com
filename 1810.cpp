#include <iostream>
#include <iomanip>
 
int main() {
    // �������
    char ch;
    int num;
    float floatNum;
    double doubleNum;
 
    // ��������
    std::cin >> ch >> num >> floatNum >> doubleNum;
 
    // ������ݰ�ָ����ʽ
    std::cout << ch << " "
              << std::setw(4) << std::right << num << " "
              << std::fixed << std::setprecision(2) << floatNum << " "
              << std::fixed << std::setprecision(12) << doubleNum << std::endl;
 
    return 0;
}