#include <iostream>

int main() {
    // �����������Ƿ�Ӽ�
    int weight;
    char express;
    std::cin >> weight >> express;

    // ��������Ѻͳ��ط�
    int baseFee = 8;
    int excessWeight = weight - 1000;
    int extraFee = 0;

    if (excessWeight > 0) {
        // ���㳬�ط�
        extraFee = (excessWeight ) / 500 * 4;
        if (excessWeight%500!=0)
        {
            extraFee += 4;
        }
    }

    // ���ѡ��Ӽ�������5Ԫ
    if (express == 'y') {
        baseFee += 5;
    }

    // ������ʷ�
    std::cout << baseFee + extraFee << std::endl;

    return 0;
}