/*
#include <iostream>: ����C++��׼���е����������ͷ�ļ���
���������������������Ļ������ߣ�
���� std::cin����׼���������� std::cout����׼��������ȡ�
����������У��������������û����������������

#include <iomanip>: ����C++��׼���е����������������ͷ�ļ���
�ṩ��һЩ���ڸ�ʽ������Ĺ��ߡ�
����������У������������������ĸ�ʽ��
���� std::fixed ����ָ�����Ϊ�̶�С��λ����ʽ��
�Լ� std::setprecision(2) �����������С������λ��Ϊ2��
*/
#include <iostream>
#include <iomanip>

int main() {
    // �������
    double n, m;

    // ����С���Ľ������ԭ��
    std::cin >> n >> m;

    // ������ۺ�ļ۸�
    double discountedPrice = m * 0.8;

    // ����С��ʣ��Ľ��
    double remainingMoney = n - discountedPrice;

    // ������������2λС��
    std::cout << std::fixed << std::setprecision(2) << remainingMoney << std::endl;

    return 0;
}
