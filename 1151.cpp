#include <iostream>

using namespace std;

// ��������������׳�
int factorial(int n);

int main() {
    // ��ȡ���������N
    int N;
    cin >> N;

    // ���ú�������׳˲�������
    cout << factorial(N) << endl;

    return 0;
}

// �������壺����׳�
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}