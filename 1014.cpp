#include <iostream>

// ����׳˵ĺ���
long factorial(int n) {
    // ���������0�Ľ׳˺�1�Ľ׳˾�Ϊ1
    if (n == 0 || n == 1) {
        return 1;
    } else {
        // �ݹ���ã�n�Ľ׳˵���n����(n-1)�Ľ׳�
        return n * factorial(n - 1);
    }
}

int main() {
    // �ӱ�׼�����ȡһ������n
    int n;
    std::cin >> n;

    // ���ڴ洢�׳˺͵ı���
    long sum = 0;

    // ѭ�����㲢�ۼ�1��n�Ľ׳�
    for (int i = 1; i <= n; ++i) {
        sum += factorial(i);
    }

    // �������������׼���
    std::cout << sum << std::endl;

    // ����0��ʾ����ɹ�����
    return 0;
}
