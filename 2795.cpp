#include <iostream>
#include <iomanip> // ���������������

int main() {
    // ����12���µĽ���
    double balance[12];
    for (int i = 0; i < 12; ++i) {
        std::cin >> balance[i];
    }

    // ����ƽ����ĩ���ಢ��������������С�����ڶ�λ��������ǰ���һ��"$"��
    double totalBalance = 0;
    for (int i = 0; i < 12; ++i) {
        totalBalance += balance[i];
    }
    double averageBalance = totalBalance / 12;
    std::cout << '$' << std::fixed << std::setprecision(2) << averageBalance << std::endl;

    return 0;
}
