#include <stdio.h>
 
int main() {
    // ����˫���ȸ���������
    double num;
 
    // ����˫���ȸ�����
    scanf("%lf", &num);
 
    // ������
    printf("%.6f\n", num);  // %f�Ľ��
    printf("%.5f\n", num);  // %f����5λС���Ľ��
    printf("%e\n", num);    // %e��ʽ�����
    printf("%g\n", num);    // %g��ʽ�����
 
    return 0;
}