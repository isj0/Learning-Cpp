#include <iostream>
using namespace std;

void greet() {
    cout << "Good morning " << endl;
    cout << "How are you?" << endl;
}
void usa() {
    cout << "You are in USA" << endl;
}

void india() {
    cout << "You are in India" << endl;
}
int main() {
    india();
    cout << "You are in main" << endl;
    greet();
    usa();
}