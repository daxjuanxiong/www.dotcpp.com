#include <iostream>

int main() {
    // �ӱ�׼�����ȡһ������n
    int n;
    std::cin >> n;

    // ��ʼ��������num���ڴ洢��ǰλ�ϵ����֣�sum���ڴ洢Sn��ֵ
    int num = 2;
    int sum = 0;

    // ʹ��ѭ������Sn��ֵ
    for (int i = 1; i <= n; ++i) {
        // ���㵱ǰ���ֵ�����ۼӵ�sum��
        sum += num;
        // ����num��������һ���ֵ
        num = num * 10 + 2;
    }

    // �������������׼���
    std::cout << sum << std::endl;

    // ����0��ʾ����ɹ�����
    return 0;
}
