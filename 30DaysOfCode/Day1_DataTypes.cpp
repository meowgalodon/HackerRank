#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    
    // Declare second integer, double, and String variables.
    int i2;
    double d2;
    string s2;
    // Read and save an integer, double, and String to your variables.
    cin >> i2 >> d2;
    cin.ignore();
    getline(cin, s2);
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    int sum_int = i + i2;
    cout << sum_int << endl;
    // Print the sum of the double variables on a new line.
    double sum_dou = d + d2;
    cout << fixed << setprecision(1) << sum_dou << endl;
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    string sum_str = s + s2;
    cout << sum_str;
    return 0;
}
