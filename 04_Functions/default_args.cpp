#include <iostream>
int Add(int = 10, int  =10, int  =10);
using namespace std;

int Add(int a, int b, int c) {
    return a + b + c;
}

int main() {
    cout << Add() << endl;
    cout << Add(1) << endl;
    cout << Add(10, 20) << endl;
    cout << Add(1, 2, 3) << endl;
}

// int Add(int a = 25, int b = 50, int c = 100) {
//     return a + b + c;
// }