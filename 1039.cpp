/*
普通闰年：公历年份是4的倍数，且不是100的倍数的，为闰年
（如2004年、2020年等就是闰年）。 

世纪闰年：公历年份是整百数的，必须是400的倍数才是闰年
（如1900年不是闰年，2000年是闰年）
*/


#include <iostream>

// 定义宏，判断是否为闰年
#define LEAP_YEAR(y) ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0) ? 'L' : 'N')

int main() {
    int year;

    // 输入年份
    std::cin >> year;

    // 使用宏判断是否为闰年并输出结果
    char result = LEAP_YEAR(year);
    std::cout << result << std::endl;

    return 0;
}
