#include <iostream>

int main() {
    // �ӱ�׼�����ȡһ��������5λ������
    int number;
    std::cin >> number;

    // ��ʼ������
    int temp = number;
    int count = 0;

    // ����λ��
    while (temp > 0) {
        temp /= 10;
        count++;
    }

    // ���³�ʼ�� temp
    temp = number;

    // ���λ��
    std::cout << count << std::endl;
    int arr[5];
    // ���ÿһλ����
    for (int i = 0; i < count; ++i) {
	arr[i] = temp%10;
        temp /= 10;
    }
    for (int i = count-1; i >= 0; --i) {
 
        std::cout << arr[i];
	if(i>0)
		std::cout<<" ";
    }
    std::cout << std::endl;
    for (int i = 0; i < count; ++i) {
 
        std::cout << arr[i];
    }
    std::cout << std::endl;

    // ����0��ʾ����ɹ�����
    return 0;
}
