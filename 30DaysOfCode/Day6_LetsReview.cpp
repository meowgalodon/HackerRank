#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int i;
    int j;
    int T;
    cin >> T;
    cin.ignore();
    
    for(i = 0; i < T; i++)
    {
        string s;
        getline(cin, s);
        
        for(j = 0; j < s.length(); j++)
        {
            if(j % 2 == 0)
            {
                cout << s[j];
            }
        }
        cout << " ";
        for(j = 0; j < s.length(); j++)
        {
            if(j % 2 != 0)
            {
                cout << s[j];
            }
        }
        cout << "\n";
    } 
    return 0;
}
