
#include <stdio.h>

int main() {
    // �������
    int confirmed, deaths;
    
    // ����ȷ������������
    scanf("%d %d", &confirmed, &deaths);
    
    // ����������
    double deathRate = (double)deaths / confirmed * 100;
    
    // ������������3λС��
    printf("%.3f%%\n", deathRate);
    
    return 0;
}


/*
#include <iostream>
#include <iomanip>

int main() {
    // �������
    int confirmed, deaths;
    
    // ����ȷ������������
    std::cin >> confirmed >> deaths;
    
    // ����������
    double deathRate = static_cast<double>(deaths) / confirmed * 100;
    
    // ������������3λС��
    std::cout << std::fixed << std::setprecision(3) << deathRate << "%" << std::endl;
    
    return 0;
}

*/