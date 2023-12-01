#include <iostream>
 
int main() {
    // 输入同学数量
    int m;
    std::cin >> m;
 
    // 输入每个同学的身高并找出最高的身高
    int max_height = 0;
    for (int i = 0; i < m; ++i) {
        int height;
        std::cin >> height;
 
        // 更新最高身高
        if (height > max_height) {
            max_height = height;
        }
    }
 
    // 输出最高身高
    std::cout << max_height << std::endl;
 
    return 0;
}