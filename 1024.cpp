#include <iostream>

int main() {
    // �ӱ�׼�����ȡ3x3����
    int matrix[3][3];

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    // �������Խ���Ԫ��֮��
    int mainDiagonalSum = 0;
    for (int i = 0; i < 3; ++i) {
        mainDiagonalSum += matrix[i][i];
    }

    // ���㸱�Խ���Ԫ��֮��
    int secondaryDiagonalSum = 0;
    for (int i = 0; i < 3; ++i) {
        secondaryDiagonalSum += matrix[i][2 - i];
    }

    // ����������׼���
    std::cout << mainDiagonalSum << " " << secondaryDiagonalSum << std::endl;

    // ����0��ʾ����ɹ�����
    return 0;
}
