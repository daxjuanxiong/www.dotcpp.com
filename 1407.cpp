#include <iostream>
 
int main() {
    // ����ͬѧ����
    int m;
    std::cin >> m;
 
    // ����ÿ��ͬѧ����߲��ҳ���ߵ����
    int max_height = 0;
    for (int i = 0; i < m; ++i) {
        int height;
        std::cin >> height;
 
        // ����������
        if (height > max_height) {
            max_height = height;
        }
    }
 
    // ���������
    std::cout << max_height << std::endl;
 
    return 0;
}