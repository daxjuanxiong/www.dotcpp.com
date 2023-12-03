#include <iostream>

// ���庯������������ƽ��ֵ
int calculateAverage(int* arr, int n) {
    int sum = 0;  // ���ڴ洢����Ԫ��֮�͵ı���

    // ʹ��ָ��������鲢�ۼ�Ԫ��ֵ
    for (int i = 0; i < n; ++i) {
        sum += *(arr + i);  // ʹ��ָ���������Ԫ�أ�����Ԫ��ֵ�ۼӵ�sum��
    }

    // ����ƽ��ֵ������
    return static_cast<int>(sum) / n;  // ��Ԫ�غͳ������鳤�ȣ��õ�ƽ��ֵ��ʹ��static_cast��������ת��
}

int main() {
    // ����Ԫ�ظ���
    int n;
    std::cin >> n;

    // ���䶯̬����
    int* arr = new int[n];  // ʹ��new�������̬����洢�ռ䣬������СΪn����������

    // ��������Ԫ��
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];  // �ӱ�׼�����ȡԪ��ֵ������洢����̬������
    }

    // ���ú�������ƽ��ֵ��������
    int average = calculateAverage(arr, n);  // ����calculateAverage���������ݶ�̬��������鳤����Ϊ����
    std::cout << average << std::endl;  // �������õ���ƽ��ֵ����׼���

    // �ͷŶ�̬�����ڴ�
    delete[] arr;  // ʹ��delete[]�ͷŶ�̬����������ڴ�

    return 0;  // ����0����ʾ����ɹ�ִ��
}
