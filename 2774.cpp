/*
���׹�ʽ��Heron's Formula�����ڼ��������ε�������乫ʽ���£�

�������ε����߳��ȷֱ�Ϊ a��b��c���� s Ϊ���ܳ���������֮�͵�һ�룩�����׹�ʽ�������� 
?
A = sqrt(s*(s-a)*(s-b)*(s-c)) 


�����ƽ������ʾ�����������ֵ�����׹�ʽ������������״�������Ρ�

ʹ�ú��׹�ʽʱ��������Ҫ������ܳ� s��Ȼ����빫ʽ���������
*/
#include <iostream>
#include <cmath>
#include <iomanip>

// ��������֮��ľ���
float calculateDistance(float x1, float y1, float x2, float y2) {
    return std::sqrt(    std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2)   );
}

int main() {
    // �������
    float x1, y1, x2, y2, x3, y3;

    // ����������������
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    // ����������֮��ľ���
    float distanceAB = calculateDistance(x1, y1, x2, y2);
    float distanceBC = calculateDistance(x2, y2, x3, y3);
    float distanceCA = calculateDistance(x3, y3, x1, y1);

    // ���������εİ��ܳ�
    float s = (distanceAB + distanceBC + distanceCA) / 2;

    float area = 0;
    // ʹ�ú��׹�ʽ�������������
    if (distanceAB == 0|| distanceBC ==0 || distanceCA == 0 )
	{
		area = 0;
	}
	else
	{
	area = std::sqrt(s * (s - distanceAB) * (s - distanceBC) * (s - distanceCA));
	}

    // ��������������С�������λ
    std::cout << std::fixed << std::setprecision(2) << area << std::endl;

    return 0;
}
