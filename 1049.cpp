#include <iostream>

// ����һ���ṹ�����
struct Date {
    int year, month, day;

    Date(int y, int m, int d) : year(y), month(m), day(d) {}
};

// �ж��Ƿ�Ϊ����
bool is_leap_year(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// ��������ڱ������ǵڼ���
int day_of_year(const Date& date) {
    int days_in_month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // ��������꣬���·�������һ
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
    // ����������
    int year, month, day;
    std::cin >> year >> month >> day;

    // ���� Date �ṹ�����
    Date date(year, month, day);

    // �������ڼ���
    int result = day_of_year(date);
    std::cout << result << std::endl;

    return 0;
}