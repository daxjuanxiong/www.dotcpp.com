#include<iostream>
using namespace std;
#include <iomanip> // 用于设置输出格式
 
int main()
{
    int bounce_count, initial_height;
    while (cin >> initial_height >> bounce_count)
    {
        double total_distance = 0;  // 总共经过的距离
        double current_height = initial_height;  // 当前高度
 
        // 模拟球的下落和反弹
        for (int i = 1; i <= bounce_count; ++i) {
            total_distance += current_height;
            // 每次反弹后高度减半
            current_height /= 2.0;
            if(i<bounce_count)
            {
            total_distance += current_height;
            }
        }
        std::cout << std::fixed << std::setprecision(2);
        cout << current_height << " " << total_distance << endl;
    }
    return 0;
}