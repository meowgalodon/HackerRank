#include <bits/stdc++.h>

using namespace std;


int main(){
    long long n;
    cin >> n;
    // if(n % 2 != 0){
    //     cout << "Weird";
    // }
    // if((n % 2 == 0) && (n >= 2 && n <= 5)){
    //     cout << "Not Weird";
    // }
    // if((n % 2 != 0) && (n >= 6 && n <= 20)){
    //     cout << "Weird";
    // }
    // if((n % 2 == 0) && n > 20){
    //     cout << "Not Weird";
    // }
    if( n % 2 == 1 || (n % 2 != 1 && (n >= 6 && n <= 20) ) ){
        cout<<"Weird";
    }
    else{
        cout<<"Not Weird";
    }
    return 0;
}

