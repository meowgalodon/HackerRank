#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int maxOfFour(int a, int b, int c, int d){
    int max = a;
    if(b > a && b > c && b > d){
        max = b;
    }
    if(a > b && a > c && a > d){
        max = a;
    }
    if(c > a && c > b && c > d){
        max = c;
    }
    if(d > a && d > b && d > c){
        max = d;
    }
    return max;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  int a, b, c, d; 
    cin >> a >> b >> c >> d;
    cout << maxOfFour(a, b, c, d);
    return 0;
}
