#include <iostream>

using namespace std;

int main() {
    // 声明一个大小为10的整数数组
    const int N = 9;
    int numbers[N+1];
    // 获取已正序排好的9个元素的数组
    for (int i = 0; i < N; ++i) {
        cin >> numbers[i];
    }


    // 获取需要插入的数字
    int insertNumber;
    cin >> insertNumber;

    // 在数组中插入数字并保持正序排列
    int i = N-1;
    while (i >= 0 && numbers[i] > insertNumber) {
        numbers[i + 1] = numbers[i];
        i--;
    }
    numbers[i + 1] = insertNumber;


    // 输出排序后的数列
    for (int j = 0; j < 10; ++j) {
        cout << numbers[j] << endl;
    }

    return 0;
}
/* 另一种写法
#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 声明一个vector存储升序序列
    vector<int> sequence;

    // 获取升序序列
  // 输入9个数字
    for (int i = 0; i < 9; ++i) {
        int num;
        cin >> num;
        sequence.push_back(num);
    }

    // 获取需要插入的数字
    int insertNumber;
    cin >> insertNumber;

    // 在升序序列中插入数字并保持升序
    vector<int>::iterator it = sequence.begin();
    while (it != sequence.end() && *it < insertNumber) {
        ++it;
    }
    sequence.insert(it, insertNumber);

    // 输出插入后的升序序列
	for (int i = 0; i < sequence.size(); ++i) {
    		cout << sequence[i]<<endl;
}
    return 0;
}
*/