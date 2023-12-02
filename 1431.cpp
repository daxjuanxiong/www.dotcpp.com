#include <iostream>
#include <vector>

using namespace std;

// ȫ�ֱ��������ڼ�¼�ܹ���Ҫ�������ǹ���
int total = 0;

// �������壺�ж����������Ԫ���Ƿ����
bool areAllElementsEqual(const int arr[], size_t size) {
    // �������飬�ж��Ƿ�����Ԫ�ض����ڵ�һ��Ԫ��
    for (size_t i = 1; i < size; ++i) {
        if (arr[i] != arr[0]) {
            return false; // ֻҪ�ҵ�һ������ȵ�Ԫ�ؾͷ���false
        }
    }
    return true; // �����������������Ԫ�ض���ȣ��򷵻�true
}

// �������壺�ж�һ����������������ż��
bool checkOddEven(int num) {
    // ʹ������������ж���ż�Բ����ؽ��
    return (num % 2 == 0) ? true : false;
}

// �������壺��һ�������Ԫ��ѭ�������ƶ�
void rotateArrayLeft(int * arr, int N) {
    int temp = arr[0] / 2;
    arr[0] = arr[0] / 2;
    
    // ѭ���ƶ�����Ԫ��
    for (int i = 0; i < N; ++i) {
        if (i != N - 1) {
            arr[i] += arr[i + 1] / 2;
            arr[i + 1] = arr[i + 1] / 2;
        } else {
            arr[i] += temp;
        }
    }

    // ��鲢�����ǹ�ʹ����ż��
    for (int i = 0; i < N; ++i) {
        bool flag = checkOddEven(arr[i]);
        if (!flag) {
            arr[i] += 1;
            total += 1;
        }
    }
}

int main() {
    // ����С���ѵ�����
    int N;
    cin >> N;

    // ����ÿ��С���ѳ�ʼ���ǹ���
    int candies[N];
    for (int i = 0; i < N; ++i) {
        cin >> candies[i];
    }

    // ѭ��ִ������Ԫ��ѭ���ƶ���ֱ������Ԫ�����
    while (!areAllElementsEqual(candies, N)) {
        rotateArrayLeft(candies, N);
    }

    // �����ʦ��Ҫ�������ǹ���
    cout << total << endl;

    return 0;
}
