#include <iostream>

int main() {
    // 输入贝贝邀请的日期
    int invitationDay;
    std::cin >> invitationDay;

    // 判断晶晶是否能接受邀请并输出结果
    if (invitationDay == 1 || invitationDay == 3 || invitationDay == 5) {
        std::cout << "NO" << std::endl;
    } else {
        std::cout << "YES" << std::endl;
    }

    return 0;
}