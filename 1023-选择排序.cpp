#include <iostream>

int main() {
    const int size = 10;
    int arr[size];

    // �ӱ�׼�����ȡ10������
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    // ѡ������
    for (int i = 0; i < size - 1; ++i) {
        int minIndex = i;

        // ��δ���򲿷����ҵ���СԪ�ص�����
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // �����ҵ�����СԪ�غ͵�ǰλ�õ�Ԫ��
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    // �������������
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << std::endl;
    }

    return 0;
}
/*
ѡ������Ļ���˼������δ����Ĳ����ҵ���С��Ԫ�أ�
Ȼ����δ���򲿷ֵĵ�һ��Ԫ�ؽ���λ�ã�
�������ơ�
����������У�����ʹ������Ƕ�׵�ѭ�����ⲿѭ���������飬
�ڲ�ѭ����δ����Ĳ����ҵ���С��Ԫ�ص�������Ȼ����н�����
���������������顣
*/