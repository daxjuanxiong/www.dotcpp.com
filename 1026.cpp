#include <iostream>
#include <vector>

using namespace std;

int main() {
    // ����һ����СΪ10����������
    int numbers[10];

    // ��ȡ�û������ʮ������
    for (int i = 0; i < 10; ++i) {
        cin >> numbers[i];
    }

    // �������
    for (int i = 9; i >= 0; --i) {
        cout << numbers[i] << " ";
    }

    return 0;
}
