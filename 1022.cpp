#include <iostream>
#include <cmath>

using namespace std;

// �ж�һ�����Ƿ�������
bool isPrime(int num) {
    // 1�͸�����������
    if (num <= 1) {
        return false;
    }

    // �ж��Ƿ���С�ڵ���sqrt(num)������
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            return false;  // �����ӣ���������
        }
    }

    return true;  // û�����ӣ�������
}

int main() {
    int num;
    cin >> num;
    for(int i = 2;i<=num;i++)
    {
    if (isPrime(i)) {
        cout << i << endl;
    } 
    }

    return 0;
}