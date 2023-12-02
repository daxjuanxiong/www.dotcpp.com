#include <iostream>

int main() {
    const int size = 10;
    int arr[size];

    // 从标准输入读取10个数字
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    // 选择排序
    for (int i = 0; i < size - 1; ++i) {
        int minIndex = i;

        // 在未排序部分中找到最小元素的索引
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // 交换找到的最小元素和当前位置的元素
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    // 输出排序后的数组
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << std::endl;
    }

    return 0;
}
/*
选择排序的基本思想是在未排序的部分找到最小的元素，
然后与未排序部分的第一个元素交换位置，
依此类推。
在这个例子中，程序使用两个嵌套的循环，外部循环遍历数组，
内部循环在未排序的部分找到最小的元素的索引，然后进行交换。
最后，输出排序后的数组。
*/