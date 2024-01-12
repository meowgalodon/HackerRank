#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    int q;
    cin >> n;
    cin >> q; //queries
    int *ptrArr[n]; //pointer array
    
    for(int i = 0; i < n; i++){
        int size;
        cin >> size;
        ptrArr[i] = (int *)malloc(size * sizeof(int)); //create the memory space
        
        for(int j = 0; j < size; j++){
            int temp;
            cin >> temp;
            ptrArr[i][j] = temp; //save values        
        }
    }
    
    //create array
    for(int i = 0; i < q; i++){ //loop until all queries are completed
        int x, y;
        cin >> x; // x value
        cin >> y; // y value
        cout << ptrArr[x][y] << endl;
    }
    return 0;
}
