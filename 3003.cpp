#include <iostream>

int main() {
    // �������
    int heads, legs;

    // ����ͷ�ͽŵ�����
    std::cin >> heads >> legs;

    // ���㼦���õ�����
    // �輦������Ϊchickens���õ�����Ϊrabbits
    // ������Ŀ��ͷ�������ͽŵ�����Ӧ���������¹�ϵ��
    // 2*chickens + 4*rabbits = legs
    // chickens + rabbits = heads
    // �ⷽ����õ������õ�����
    int chickens = (4 * heads - legs) / 2;
    int rabbits = heads - chickens;

    // ������
    std::cout << chickens << " " << rabbits << std::endl;

    return 0;
}
