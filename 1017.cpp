#include <iostream>
 
using namespace std;
 
// �ж�һ�����Ƿ�Ϊ����
bool isPerfectNumber(int num) {
    int sum = 1; // ����1�ض������������������ӣ����Գ�ʼ��Ϊ1
 
    // Ѱ������
    for (int i = 2; i < num; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }
 
    return sum == num;
}
 
// ���������������
void outputPerfectNumbers(int N) {
 
    for (int i = 2; i <= N; ++i) {
        if (isPerfectNumber(i)) {
            cout << i << " its factors are 1";
             
            for (int j = 2; j  < i; ++j) {
                if (i % j == 0) {
                    cout << " " << j;
                }
            }
 
            cout << endl;
        }
    }
}
 
int main() {
    int N;
    cin >> N;
 
    outputPerfectNumbers(N);
 
    return 0;
}