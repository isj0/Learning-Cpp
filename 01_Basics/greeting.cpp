// preprocessing directive - enables program to output data to the stream
#include <iostream>

// function main begins the program exection
int main() {
    // cout belongs to 'std' namespace
    // '<<' - stream insertion operator
    std::cout << "Hello world !\n";
    std::cout << "Welcome to c++\n";

    // prompt user for input
    std::string name;
    std::cout << "Enter you name:";
    
    std::cin >> name;

    std::cout << "Are you having fun, " << name << " ?";

    // indicates the program ended successfully
    return 0;
}
