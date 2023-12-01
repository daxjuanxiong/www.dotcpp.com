#include <iostream>
 
int main() {
    // 输入班级数量
    int m;
    std::cin >> m;
 
    // 输入每个班级的人数，并计算总人数
    int totalPeople = 0;
    for (int i = 0; i < m; ++i) {
        int classSize;
        std::cin >> classSize;
        totalPeople += classSize;
    }
 
    // 输出总人数
    std::cout << totalPeople << std::endl;
 
    return 0;
}