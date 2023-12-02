/*
海伦公式（Heron's Formula）用于计算三角形的面积，其公式如下：

设三角形的三边长度分别为 a、b、c，令 s 为半周长（即三边之和的一半），则海伦公式计算的面积 
?
A = sqrt(s*(s-a)*(s-b)*(s-c)) 


这里的平方根表示计算面积的正值。海伦公式适用于任意形状的三角形。

使用海伦公式时，首先需要计算半周长 s，然后代入公式计算面积。
*/
#include <iostream>
#include <cmath>
#include <iomanip>

// 计算两点之间的距离
float calculateDistance(float x1, float y1, float x2, float y2) {
    return std::sqrt(    std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2)   );
}

int main() {
    // 定义变量
    float x1, y1, x2, y2, x3, y3;

    // 输入三个顶点坐标
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    // 计算三个点之间的距离
    float distanceAB = calculateDistance(x1, y1, x2, y2);
    float distanceBC = calculateDistance(x2, y2, x3, y3);
    float distanceCA = calculateDistance(x3, y3, x1, y1);

    // 计算三角形的半周长
    float s = (distanceAB + distanceBC + distanceCA) / 2;

    float area = 0;
    // 使用海伦公式计算三角形面积
    if (distanceAB == 0|| distanceBC ==0 || distanceCA == 0 )
	{
		area = 0;
	}
	else
	{
	area = std::sqrt(s * (s - distanceAB) * (s - distanceBC) * (s - distanceCA));
	}

    // 输出结果，保留到小数点后两位
    std::cout << std::fixed << std::setprecision(2) << area << std::endl;

    return 0;
}
