#include <stdio.h>
#include <math.h>

double calculateFunction(double x) {
    double result;

    if (x < 0) {
        result = fabs(x);
    } else if (x < 2) {
        result = pow(x + 1, 1.0 / 2);
    } else if (x < 4) {
        result = pow(x + 2, 5);  // ��ӷֺ�
    } else {
        result = 2 * x + 5;
    }

    return result;
}

int main() {
    double x;
    scanf("%lf", &x);

    double result = calculateFunction(x);

    // ������������2λС��
    printf("%.2lf\n", result);

    return 0;
}
