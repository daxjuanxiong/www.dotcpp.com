#include <iostream>
#include <cmath> // �������ھ���ֵ�����ͷ�ļ�
#include<iomanip>

int main() {
    // ���븡����
    double inputFloat;
    std::cin >> inputFloat;

    // �������ֵ
    double absoluteValue = std::abs(inputFloat);

    // ��������������С�������λ
    std::cout << std::fixed << std::setprecision(2) << absoluteValue << std::endl;

    return 0;
}

/*
iomanip �� C++ �����ڴ������������ʽ��ͷ�ļ������ṩ��һЩ���ڸ�ʽ������Ĺ��ߣ�
���а��� std::setprecision��std::setw��std::fixed �ȡ�

������������У�����ʹ���� std::fixed �� std::setprecision(2) ����������ĸ�ʽ������˵�����£�

std::fixed�����ø����������ʽΪ�̶�С�����ʾ������С������й̶�λ�������֡�
std::setprecision(2)�����ø����������С�����λ��Ϊ2��
����������һ��ʹ�ã�ȷ������ĸ�����������λС����

������һ���򵥵����ӣ���ʾ�� iomanip ��ʹ�ã�


#include <iostream>
#include <iomanip>

int main() {
    double pi = 3.141592653589793;

    // ʹ�� std::fixed �� std::setprecision(2) ��ʽ�����
    std::cout << "Default Format: " << pi << std::endl;
    std::cout << "Fixed Format with Precision 2: " 
	<< std::fixed << std::setprecision(2) << pi << std::endl;

    return 0;
}

*/
