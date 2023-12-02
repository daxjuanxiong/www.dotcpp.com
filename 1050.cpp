#include <iostream>
#include <string>

// ����ѧ���ṹ��
struct Student {
    std::string id;      // ѧ��
    std::string name;    // ����
    int score1, score2, score3;  // ���Ƴɼ�
};

// ���뺯��
void input(Student& student) {
    std::cin >> student.id >> student.name >> student.score1 >> student.score2 >> student.score3;
    // �ӱ�׼������(cin)�����ζ�ȡѧ�š����������Ƴɼ������洢����Ӧ�Ľṹ���Ա��
}

// �������
void print(const Student& student) {
    std::cout << student.id << "," << student.name << "," << student.score1 << "," << student.score2 << "," << student.score3 << std::endl;
    // ��ѧ���ṹ��ĳ�Ա�������׼�����(cout)���Զ��ŷָ��������ϻ��з�
}

int main() {
    // ��ȡѧ������
    int N;
    std::cin >> N;
    // �ӱ�׼������(cin)�ж�ȡѧ������N

    // ����ѧ������
    Student students[N];  // ʹ��C++�еı䳤���飬�洢N��ѧ�������ݼ�¼

    // ����ѧ�����ݼ�¼
    for (int i = 0; i < N; ++i) {
        input(students[i]);  // ѭ������input������Ϊÿ��ѧ���������ݼ�¼
    }

    // ���ѧ�����ݼ�¼
    for (int i = 0; i < N; ++i) {
        print(students[i]);  // ѭ������print������Ϊÿ��ѧ��������ݼ�¼
    }

    return 0;
}
