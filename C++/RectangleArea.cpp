#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int area(int width, int height)
{
    return width * height;    
}

void rectangleArea(int width, int height)
{
    std::cout << width << " " << height << std::endl;
    std::cout << area(width, height);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int width;
    std::cin >> width;
    int height;
    std::cin >> height;
    
    area(width, height);
    rectangleArea(width, height);   
    return 0;
}
