#include <iostream>

// 定义一个结构体变量
struct Date {
    int year, month, day;

    Date(int y, int m, int d) : year(y), month(m), day(d) {}
};

// 判断是否为闰年
bool is_leap_year(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// 计算该日在本年中是第几天
int day_of_year(const Date& date) {
    int days_in_month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // 如果是闰年，二月份天数加一
    if (is_leap_year(date.year)) {
        days_in_month[2] = 29;
    }

    int total_days = 0;
    for (int i = 1; i < date.month; ++i) {
        total_days += days_in_month[i];
    }
    total_days += date.day;

    return total_days;
}

int main() {
    // 输入年月日
    int year, month, day;
    std::cin >> year >> month >> day;

    // 创建 Date 结构体对象
    Date date(year, month, day);

    // 输出当年第几天
    int result = day_of_year(date);
    std::cout << result << std::endl;

    return 0;
}