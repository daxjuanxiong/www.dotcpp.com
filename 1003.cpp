#include <iostream>
 
int main() {
    // ��ȡ�û������5���ַ�
    char c1, c2, c3, c4, c5;
    std::cin >> c1 >> c2 >> c3 >> c4 >> c5;
 
    // ���ܹ��ɣ���ԭ����ĸ����ĵ�4����ĸ����ԭ������ĸ
    c1 = c1 + 4;
    c2 = c2 + 4;
    c3 = c3 + 4;
    c4 = c4 + 4;
    c5 = c5 + 4;
 
    // ������ܺ�Ľ��
    std::cout << c1 << c2 << c3 << c4 << c5 << std::endl;
 
    return 0;
}