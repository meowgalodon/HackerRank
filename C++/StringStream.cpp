#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    string s;
    cin >> s;
    long len = s.length();
    for(int i=0;i<len;i++)
    {
        if(s[i]!= ',')
        {
            cout<<s[i];
        }
        else if(s[i]==',')
        {
            cout<<endl;
        }
    }  
    return 0;
}
