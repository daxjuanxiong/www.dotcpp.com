#include <iostream>

int main() {
    // �������
    int a1, a2, n;

    // ����ǰ�����n
    std::cin >> a1 >> a2 >> n;

    // ���㹫��
    int d = a2 - a1;

    // �����n���ֵ
    int an = a1 + (n - 1) * d;

    // ������
    std::cout << an << std::endl;

    return 0;
}
