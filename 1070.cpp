#include <stdio.h>

int main() {
    int score;
    int excellent = 0, pass = 0, fail = 0;

    printf("请输入学生成绩（遇0结束）:\n");

    while (1) {
        scanf("%d", &score);

        // 输入为0或负数时结束循环
        if (score <= 0) {
            break;
        }

        // 统计成绩段人数
        if (score >= 85) {
            excellent++;
        } else if (score >= 60) {
            pass++;
        } else {
            fail++;
        }
    }

    // 输出各个成绩段的人数
    printf(">=85:%d\n", excellent);
    printf("60-84:%d\n", pass);
    printf("<60:%d\n", fail);

    return 0;
}
