#include <iostream>
 
int main() {
    // ����༶����
    int m;
    std::cin >> m;
 
    // ����ÿ���༶��������������������
    int totalPeople = 0;
    for (int i = 0; i < m; ++i) {
        int classSize;
        std::cin >> classSize;
        totalPeople += classSize;
    }
 
    // ���������
    std::cout << totalPeople << std::endl;
 
    return 0;
}