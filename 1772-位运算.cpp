

#include <iostream>
#include <bitset>

/*
���� binary_representation ���ڴ洢�����ʮ�������Ķ����Ʊ�ʾ��
�� selected_bits ���ڴ洢���Ҷ˿�ʼ�ĵ�4��7λ�Ķ����Ʊ�ʾ��

std::bitset<32> binary_representation(decimal_number);��
����һ��32λ�� bitset ����ʹ�������ʮ������ decimal_number ���г�ʼ����
�⽫��ʮ������ת��Ϊ32λ�Ķ����Ʊ�ʾ����ಹ�㡣

std::bitset<4> selected_bits;������һ��4λ�� bitset ����
���ڴ洢���Ҷ˿�ʼ�ĵ�4��7λ�Ķ����Ʊ�ʾ��

������ bitset �����ʹ��ʹ�����ǿ��Է���ش�������Ʊ�ʾ�е�λ������
����������У�����ʹ���� bitset ���͵ĳ�Ա�����Ͳ����������ʺͲ���������λ��
*/
// �Զ��庯������ȡ���Ҷ˿�ʼ�ĵ�4��7λ��ʮ���Ʊ�ʾ

int getSelectedBits(int decimal_number) {
    std::bitset<32> binary_representation(decimal_number);
    std::bitset<4> selected_bits;

    for (int i = 0; i < 4; ++i) {
        selected_bits[i] = binary_representation[i + 4];
    }

    return selected_bits.to_ulong();
/*

selected_bits.to_ulong() �� C++ ��׼���� std::bitset ���һ����Ա�������á�
���������Ŀ���ǽ������Ʊ�ʾ��λ����ת��Ϊ��Ӧ���޷��ų����ͣ�unsigned long����ֵ��

����Ĵ����У�selected_bits ��һ�� std::bitset<4> ���͵Ķ��󣬱�ʾһ��4λ�Ķ���������
���� to_ulong() �����������������ת��Ϊ��Ӧ���޷��ų����͡�

���磬��� selected_bits ��ʾ�������� 1010����ô���� to_ulong() �󽫷���ʮ������ 10��

������ض�����Ƭ���У�getSelectedBits �����е� return selected_bits.to_ulong(); 
�����ش������ʮ�������Ķ����Ʊ�ʾ����ȡ�Ĵ��Ҷ˿�ʼ�ĵ�4��7λ�Ĳ��֣���ʮ���Ʊ�ʾ��
*/
}


int getSelectedBits1(int decimal_number) {
    int selected_bits=0;
    for (int i = 0; i < 4; ++i) {
        int bit = (decimal_number >> (i + 4)) & 1;
        selected_bits |= (bit << i);
    }
    return selected_bits;
/*
int selected_bits = 0;: ��ʼ��һ������ selected_bits�����ڴ洢��ȡ�Ķ�����λ��

for (int i = 0; i < 4; ++i) {: ��ʼһ��ѭ����ѭ��4�Σ�ÿ�δ���һ��������λ��

int bit = (decimal_number >> (i + 4)) & 1;: �� decimal_number �����ƶ� i + 4 λ��
Ȼ��ͨ�� & 1 ����ȡ���ƶ�������λ���洢�� bit �����С������ͻ�ȡ�˴��Ҷ˿�ʼ�ĵ�4��7λ�Ķ�����λ��

selected_bits |= (bit << i);: �� bit ��ֵ���� i λ��
Ȼ��ͨ����λ����� |= ���뵽 selected_bits �С��������𲽹����˴��Ҷ˿�ʼ�ĵ�4��7λ�Ķ���������

���գ�selected_bits �����д洢�ľ��Ǵ��Ҷ˿�ʼ�ĵ�4��7λ��ɵĶ�������
*/
}

// ����getSelectedBits��getSelectedBits1�Ĺ�����ȫһ��

int main() {
    // ����һ��10����������
    int decimal_number;
    std::cin >> decimal_number;

    // �����Զ��庯���������һ���ֵ�10���Ʊ�ʾ
    std::cout << getSelectedBits1(decimal_number) << std::endl;

    return 0;
}