#include <iostream>
#include <iomanip>  // ���������������
#include<cmath>
using namespace std;

int main() {
    // ��ȡ����İ뾶
    double radius;
    cin >> radius;

    // ����Բ�����
    double area = M_PI* radius * radius;

    // ��������������λС��
    cout << fixed << setprecision(2)<< area << endl;

    return 0;
}