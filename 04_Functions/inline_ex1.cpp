#include <iostream>
using namespace std;

inline int cube(int);

int main() {
    int n, result;
    cout << "Enter a number: ";
    cin >> n;

    result = cube(n);
    cout << "The cube is " << result << endl;
}

int cube(int n) {
    return n * n * n;
}