#include <iostream>

// ������εĺ꣬ʵ����������ֵ�Ļ���
#define SWAP(x, y) { int temp = x; x = y; y = temp; }

int main() {
    int num1, num2;

    // ����������
    std::cin >> num1 >> num2;

    // ʹ�ú꽻����������ֵ
    SWAP(num1, num2);

    // ����������������
    std::cout << num1 << " " << num2 << std::endl;

    return 0;
}
