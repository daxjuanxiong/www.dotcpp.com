#include <iostream>
#include <iomanip> // �����������С��λ��
 
int main() {
    // ��ȡ�û�����Ļ����¶�
    double fahrenheit;
    std::cin >> fahrenheit;
 
    // ʹ�ù�ʽ�����¶�ת��
    double celsius = 5 * (fahrenheit - 32) / 9;
 
    // �������С��λ��Ϊ��λ
    std::cout << std::fixed << std::setprecision(2);
 
    // ��������¶�
    std::cout << "c=" << celsius << std::endl;
 
    return 0;
}