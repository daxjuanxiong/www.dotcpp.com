#include <iostream>

int main() {
    // �ӱ�׼�����ȡN
    int N;
    std::cin >> N;

    // ��ʼ����������
    int peach = 1;

    // �ӵ�N�쵹�Ƶ���1��
    for (int i = N; i > 1; --i) {
        peach = (peach + 1) * 2;
    }

    // ���������������׼���
    std::cout << peach << std::endl;

    // ����0��ʾ����ɹ�����
    return 0;
}
