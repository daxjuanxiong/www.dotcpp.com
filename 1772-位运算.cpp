

#include <iostream>
#include <bitset>

/*
其中 binary_representation 用于存储输入的十进制数的二进制表示，
而 selected_bits 用于存储从右端开始的第4至7位的二进制表示。

std::bitset<32> binary_representation(decimal_number);：
创建一个32位的 bitset 对象，使用输入的十进制数 decimal_number 进行初始化。
这将把十进制数转换为32位的二进制表示，左侧补零。

std::bitset<4> selected_bits;：创建一个4位的 bitset 对象，
用于存储从右端开始的第4至7位的二进制表示。

这两个 bitset 对象的使用使得我们可以方便地处理二进制表示中的位操作。
在这个例子中，我们使用了 bitset 类型的成员函数和操作符来访问和操作二进制位。
*/
// 自定义函数，获取从右端开始的第4至7位的十进制表示

int getSelectedBits(int decimal_number) {
    std::bitset<32> binary_representation(decimal_number);
    std::bitset<4> selected_bits;

    for (int i = 0; i < 4; ++i) {
        selected_bits[i] = binary_representation[i + 4];
    }

    return selected_bits.to_ulong();
/*

selected_bits.to_ulong() 是 C++ 标准库中 std::bitset 类的一个成员函数调用。
这个函数的目的是将二进制表示的位集合转换为对应的无符号长整型（unsigned long）数值。

在你的代码中，selected_bits 是一个 std::bitset<4> 类型的对象，表示一个4位的二进制数。
调用 to_ulong() 函数将这个二进制数转换为对应的无符号长整型。

例如，如果 selected_bits 表示二进制数 1010，那么调用 to_ulong() 后将返回十进制数 10。

在你的特定代码片段中，getSelectedBits 函数中的 return selected_bits.to_ulong(); 
将返回从输入的十进制数的二进制表示中提取的从右端开始的第4至7位的部分，以十进制表示。
*/
}


int getSelectedBits1(int decimal_number) {
    int selected_bits=0;
    for (int i = 0; i < 4; ++i) {
        int bit = (decimal_number >> (i + 4)) & 1;
        selected_bits |= (bit << i);
    }
    return selected_bits;
/*
int selected_bits = 0;: 初始化一个整数 selected_bits，用于存储提取的二进制位。

for (int i = 0; i < 4; ++i) {: 开始一个循环，循环4次，每次处理一个二进制位。

int bit = (decimal_number >> (i + 4)) & 1;: 将 decimal_number 向右移动 i + 4 位，
然后通过 & 1 操作取得移动后的最低位，存储在 bit 变量中。这样就获取了从右端开始的第4至7位的二进制位。

selected_bits |= (bit << i);: 将 bit 的值左移 i 位，
然后通过按位或操作 |= 加入到 selected_bits 中。这样就逐步构建了从右端开始的第4至7位的二进制数。

最终，selected_bits 变量中存储的就是从右端开始的第4至7位组成的二进制数
*/
}

// 函数getSelectedBits与getSelectedBits1的功能完全一致

int main() {
    // 读入一个10进制正整数
    int decimal_number;
    std::cin >> decimal_number;

    // 调用自定义函数，输出这一部分的10进制表示
    std::cout << getSelectedBits1(decimal_number) << std::endl;

    return 0;
}