#include <iostream>

using namespace std;

int main() {
    // ����һ����СΪ10����������
    const int N = 9;
    int numbers[N+1];
    // ��ȡ�������źõ�9��Ԫ�ص�����
    for (int i = 0; i < N; ++i) {
        cin >> numbers[i];
    }


    // ��ȡ��Ҫ���������
    int insertNumber;
    cin >> insertNumber;

    // �������в������ֲ�������������
    int i = N-1;
    while (i >= 0 && numbers[i] > insertNumber) {
        numbers[i + 1] = numbers[i];
        i--;
    }
    numbers[i + 1] = insertNumber;


    // �������������
    for (int j = 0; j < 10; ++j) {
        cout << numbers[j] << endl;
    }

    return 0;
}
/* ��һ��д��
#include <iostream>
#include <vector>

using namespace std;

int main() {
    // ����һ��vector�洢��������
    vector<int> sequence;

    // ��ȡ��������
  // ����9������
    for (int i = 0; i < 9; ++i) {
        int num;
        cin >> num;
        sequence.push_back(num);
    }

    // ��ȡ��Ҫ���������
    int insertNumber;
    cin >> insertNumber;

    // �����������в������ֲ���������
    vector<int>::iterator it = sequence.begin();
    while (it != sequence.end() && *it < insertNumber) {
        ++it;
    }
    sequence.insert(it, insertNumber);

    // �����������������
	for (int i = 0; i < sequence.size(); ++i) {
    		cout << sequence[i]<<endl;
}
    return 0;
}
*/