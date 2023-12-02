#include <iostream>   // �������������ͷ�ļ�
#include <cmath>      // ������ѧ����ͷ�ļ�
#include <iomanip>    // ���������ʽ����ͷ�ļ�

int main() {
    // �������
    double Xa, Ya, Xb, Yb;  // �����ĸ�˫���ȸ������������ֱ��ʾ��A�͵�B������

    // ����˵�����
    std::cin >> Xa >> Ya;   // �ӱ�׼�������ж�ȡA�������
    std::cin >> Xb >> Yb;   // �ӱ�׼�������ж�ȡB�������

    // �����߶�AB�ĳ���
    double distance = std::sqrt(std::pow(Xb - Xa, 2) + std::pow(Yb - Ya, 2));  // ʹ��sqrt��pow�������������ľ���

    // ��������������С�����3λ
    std::cout << std::fixed << std::setprecision(3) << distance << std::endl;  // ������������С�����3λ

    return 0;  // ����0����ʾ����ִ�гɹ�
}

/*
iomanip ��ȫ���� Input/Output Manipulation��
���� C++ ��׼���е�һ��ͷ�ļ������ڸ�ʽ������������
iomanip �ṩ��һЩ���ڸ�ʽ���Ƶĺ�����ʹ�ó���Ա�ܹ������ؿ�������ĸ�ʽ��
������������ľ��ȡ���ȡ����뷽ʽ�ȡ�
������Ĵ����У�
std::fixed �� std::setprecision ���� iomanip ͷ�ļ��ж����һЩ���ڸ�ʽ������Ĺ��ܡ�
*/


