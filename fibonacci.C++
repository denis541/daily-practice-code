#include <iostream>
using namespace std;

//algorithm to print the first 18 fibonacci numbers//
int main() {
     int i;
     int n = 18;
     int first, second, next;
     first = 0;
     second = 1;
     cout << first << " , " << second;
     for (i = 2; i < 18; i++) {
        next = first + second;
        cout << "," << next;
        first = second;
        second = next;
     }
     cout << endl;
    return 0;
}