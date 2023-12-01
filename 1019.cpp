#include<iostream>
using namespace std;
#include <iomanip> // �������������ʽ
 
int main()
{
    int bounce_count, initial_height;
    while (cin >> initial_height >> bounce_count)
    {
        double total_distance = 0;  // �ܹ������ľ���
        double current_height = initial_height;  // ��ǰ�߶�
 
        // ģ���������ͷ���
        for (int i = 1; i <= bounce_count; ++i) {
            total_distance += current_height;
            // ÿ�η�����߶ȼ���
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