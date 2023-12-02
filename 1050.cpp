#include <iostream>
#include <string>

// 定义学生结构体
struct Student {
    std::string id;      // 学号
    std::string name;    // 姓名
    int score1, score2, score3;  // 三科成绩
};

// 输入函数
void input(Student& student) {
    std::cin >> student.id >> student.name >> student.score1 >> student.score2 >> student.score3;
    // 从标准输入流(cin)中依次读取学号、姓名和三科成绩，并存储到对应的结构体成员中
}

// 输出函数
void print(const Student& student) {
    std::cout << student.id << "," << student.name << "," << student.score1 << "," << student.score2 << "," << student.score3 << std::endl;
    // 将学生结构体的成员输出到标准输出流(cout)，以逗号分隔，最后加上换行符
}

int main() {
    // 读取学生数量
    int N;
    std::cin >> N;
    // 从标准输入流(cin)中读取学生数量N

    // 创建学生数组
    Student students[N];  // 使用C++中的变长数组，存储N个学生的数据记录

    // 输入学生数据记录
    for (int i = 0; i < N; ++i) {
        input(students[i]);  // 循环调用input函数，为每个学生输入数据记录
    }

    // 输出学生数据记录
    for (int i = 0; i < N; ++i) {
        print(students[i]);  // 循环调用print函数，为每个学生输出数据记录
    }

    return 0;
}
