#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    std::string a;
    std::string b;
    
    std::getline(std::cin, a);
    std::getline(std::cin, b);
    
    std::cout << a.size() << " " << b.size() << std::endl;
    std::cout << a + b << std::endl;
    std::cout << b[0] + a.substr(1, a.length() - 1) << " " << a[0] + b.substr(1, b.length() - 1);
    return 0;
}
