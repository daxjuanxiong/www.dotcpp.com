#include <iostream>
 
int main() {
 
    for (int num = 100; num < 1000; ++num) {
        // ��ȡÿλ����
        int digit1 = num / 100;     // ��λ
        int digit2 = (num / 10) % 10; // ʮλ
        int digit3 = num % 10;      // ��λ
 
        // ����������
        int sum_of_cubes = digit1 * digit1 * digit1 + digit2 * digit2 * digit2 + digit3 * digit3 * digit3;
 
        // �ж��Ƿ�Ϊˮ�ɻ��������
        if (sum_of_cubes == num) {
            std::cout << num << std::endl;
        }
    }
 
    return 0;
}