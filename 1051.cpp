#include <iostream>
#include <vector>
#include <string>
using namespace std;
// ����ѧ���ṹ��
struct Student {
    string id;
    string name;
    int score1, score2, score3;
};

int main() {
    // ����ѧ������
    int N;
    std::cin >> N;

    // ����ѧ�����ݲ�������ſε�ƽ���ɼ�
    std::vector<Student> students(N);

    // ��ʼ�����ſε��ܷ�
    double totalScore1 = 0, totalScore2 = 0, totalScore3 = 0;

    // ����ѧ������
    for (int i = 0; i < N; ++i) {
        std::cin >> students[i].id >> students[i].name >> students[i].score1 >> students[i].score2 >> students[i].score3;

        // �ۼӸ��ſε��ܷ�
        totalScore1 += students[i].score1;
        totalScore2 += students[i].score2;
        totalScore3 += students[i].score3;
    }

    // ������ſε�ƽ���ɼ�
    double averageScore1 = totalScore1 / N;
    double averageScore2 = totalScore2 / N;
    double averageScore3 = totalScore3 / N;

    // �ҵ���߷ֵ�ѧ��
    int maxIndex = 0;
    int maxTotalScore = students[0].score1 + students[0].score2 + students[0].score3;

    for (int i = 1; i < N; ++i) {
        int currentTotalScore = students[i].score1 + students[i].score2 + students[i].score3;
        if (currentTotalScore > maxTotalScore) {
            maxTotalScore = currentTotalScore;
            maxIndex = i;
        }
    }

    // ������ſε�ƽ���ɼ�
    std::cout  << averageScore1 << " " << averageScore2 << " " << averageScore3 << std::endl;

    // �����߷ֵ�ѧ������
    std::cout  << students[maxIndex].id << " " << students[maxIndex].name << " "
              << students[maxIndex].score1 << " " << students[maxIndex].score2 << " " << students[maxIndex].score3 << std::endl;

    return 0;
}