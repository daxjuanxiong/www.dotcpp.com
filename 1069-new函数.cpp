#include <iostream>
#include <cmath>

int main() {
    // ��������ά��
    int n;
    std::cin >> n;

    // ���ڴ洢����ֵ���Ԫ�ؼ���λ�õı���
    int maxElement = 0;
    int maxRow = 0, maxCol = 0;

    // ��̬�����ά���飬matrix��һ��ָ��ָ���ָ��
    int **matrix = new int*[n];
    for (int i = 0; i < n; i++) {
        // ��ÿһ�ж�̬�����ڴ棬���ɾ���
        matrix[i] = new int[n];
    }

    // �������Ԫ��
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cin >> matrix[i][j];

            // �ҳ�����ֵ����Ԫ�ؼ���λ��
            if (std::abs(matrix[i][j]) > std::abs(maxElement)) {
                maxElement = matrix[i][j];
                maxRow = i + 1;  // ���±��1��ʼ
                maxCol = j + 1;  // ���±��1��ʼ
            }
        }
    }

    // ������
    std::cout << maxElement << " " << maxRow << " " << maxCol << std::endl;

    // �ͷŶ�̬������ڴ�
    for (int i = 0; i < n; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
/*
�ó���̬������һ���������飬����ʹ�ú��ͷ����ڴ档
#include <iostream>

int main() {
    // ��̬�����������飬��СΪ5
    int *arr = new int[5];

    // ��ʼ������Ԫ��
    for (int i = 0; i < 5; ++i) {
        arr[i] = i * 2;
    }

    // �������Ԫ��
    std::cout << "����Ԫ�أ�";
    for (int i = 0; i < 5; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // �ͷŶ�̬������ڴ�
    delete[] arr;

    return 0;
}
�����������ʹ�� new �������̬������һ������5�����������顣
Ȼ��ͨ��ѭ����ʼ������Ԫ�أ���������ǡ�
���ʹ�� delete[] ������ͷ��˶�̬������ڴ档
���� new �� delete ��C++�����ڶ�̬�ڴ������ͷŵĻ����÷���
*/