/*
<cmath> ͷ�ļ��е� fmod �������ڼ����������������������亯��ԭ�����£�

cpp
Copy code
double fmod(double numer, double denom);
���У�numer �Ǳ�������denom �ǳ�������������ֵ�� numer / denom ��������

fmod �����ļ�������ǣ����� numer ���� denom ��������
�� numer �� denom ȡģ�Ľ�������������������������
numer = k * denom + remainder������ k ���������� 0 <= remainder < |denom|��

���磬�������� fmod(73.263, 0.9973)������������ 0.4601
����Ϊ 73.263 = 73 * 0.9973 + 0.4601��������������㸡����������������
*/

#include <iostream>
#include<cmath>
int main() {
    // �������
    double a, b;
 
    // ��������˫���ȸ�����
    std::cin >> a >> b;
 
    // ��������
    double remainder = fmod(a, b);
 
    // ������
    std::cout << remainder << std::endl;
 
    return 0;
}