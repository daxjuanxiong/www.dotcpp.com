
#include <stdio.h>

int main() {
    // 定义变量
    int confirmed, deaths;
    
    // 输入确诊数和死亡数
    scanf("%d %d", &confirmed, &deaths);
    
    // 计算死亡率
    double deathRate = (double)deaths / confirmed * 100;
    
    // 输出结果，保留3位小数
    printf("%.3f%%\n", deathRate);
    
    return 0;
}


/*
#include <iostream>
#include <iomanip>

int main() {
    // 定义变量
    int confirmed, deaths;
    
    // 输入确诊数和死亡数
    std::cin >> confirmed >> deaths;
    
    // 计算死亡率
    double deathRate = static_cast<double>(deaths) / confirmed * 100;
    
    // 输出结果，保留3位小数
    std::cout << std::fixed << std::setprecision(3) << deathRate << "%" << std::endl;
    
    return 0;
}

*/