#include <iostream>

using namespace std;

// ���ݳɼ��жϵȼ�
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
    cout << "������ɼ���0-100��: ";
    cin >> score;
        char grade = getGrade(score);
        cout << grade << endl;
    return 0;
}
