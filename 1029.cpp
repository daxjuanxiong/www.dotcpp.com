#include <iostream>
#include <cmath> // ����ͷ�ļ���ʹ�� sqrt ����
using namespace std;

// �ж������ĺ���
bool isPrime(int num) {
    if (num <= 1) {
        return false; // 1 ��������
    }

    int sqrtNum = sqrt(num); // ���� num ��ƽ����

    for (int i = 2; i <= sqrtNum; ++i) {
        if (num % i == 0) {
            return false; // num �ܱ� i ��������������
        }
    }

    return true; // ������������������㣬num ������
}

int main() {
    int number;

    cout << "����һ������: ";
    cin >> number;

    // �����ж������ĺ���
    if (isPrime(number)) {
        cout << "prime" << endl;
    } else {
        cout << "not prime" << endl;
    }

    return 0;
}
