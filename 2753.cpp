/*
�ֱ�����һ��float���͵ı�����һ��double���͵ı�����
Ȼ��ʹ��sizeof������ȡ���ǵĴ洢�ռ��С��
��ͨ��std::cout�����������С����һ���ո������
��C++�У�sizeof���ص����ֽ���������ֱ��������ɡ�
*/
#include <iostream>

int main() {
    float f;
    double d;

    std::cout << sizeof(f) << " " << sizeof(d) << std::endl;

    return 0;
}
