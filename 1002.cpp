#include <iostream>
 
int main() {
    // �����������ڴ洢�û����������ֵ
    double a, b, c;
    std::cin >> a >> b >> c;
 
    // �������ֵ
    double max_value = a;
 
    if (b > max_value) {
        max_value = b;
    }
 
    if (c > max_value) {
        max_value = c;
    }
 
    // ������ֵ
    std::cout << max_value << std::endl;
 
    return 0;
}