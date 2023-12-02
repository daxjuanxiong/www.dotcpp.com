#include <iostream>

using namespace std;

// 根据成绩判断等级
char getGrade(int score) {
    if (score >= 90) {
        return 'A';
    } else if (score >= 80) {
        return 'B';
    } else if (score >= 70) {
        return 'C';
    } else if (score >= 60) {
        return 'D';
    } else {
        return 'E';
    }
}

int main() {
    int score;
    cout << "请输入成绩（0-100）: ";
    cin >> score;
        char grade = getGrade(score);
        cout << grade << endl;
    return 0;
}
