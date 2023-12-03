#include <iostream>
#include <vector>
#include <string>
using namespace std;
// 定义学生结构体
struct Student {
    string id;
    string name;
    int score1, score2, score3;
};

int main() {
    // 输入学生数量
    int N;
    std::cin >> N;

    // 输入学生数据并计算各门课的平均成绩
    std::vector<Student> students(N);

    // 初始化各门课的总分
    double totalScore1 = 0, totalScore2 = 0, totalScore3 = 0;

    // 输入学生数据
    for (int i = 0; i < N; ++i) {
        std::cin >> students[i].id >> students[i].name >> students[i].score1 >> students[i].score2 >> students[i].score3;

        // 累加各门课的总分
        totalScore1 += students[i].score1;
        totalScore2 += students[i].score2;
        totalScore3 += students[i].score3;
    }

    // 计算各门课的平均成绩
    double averageScore1 = totalScore1 / N;
    double averageScore2 = totalScore2 / N;
    double averageScore3 = totalScore3 / N;

    // 找到最高分的学生
    int maxIndex = 0;
    int maxTotalScore = students[0].score1 + students[0].score2 + students[0].score3;

    for (int i = 1; i < N; ++i) {
        int currentTotalScore = students[i].score1 + students[i].score2 + students[i].score3;
        if (currentTotalScore > maxTotalScore) {
            maxTotalScore = currentTotalScore;
            maxIndex = i;
        }
    }

    // 输出各门课的平均成绩
    std::cout  << averageScore1 << " " << averageScore2 << " " << averageScore3 << std::endl;

    // 输出最高分的学生数据
    std::cout  << students[maxIndex].id << " " << students[maxIndex].name << " "
              << students[maxIndex].score1 << " " << students[maxIndex].score2 << " " << students[maxIndex].score3 << std::endl;

    return 0;
}