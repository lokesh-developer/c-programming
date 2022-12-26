#include<iostream>
using namespace std;

// addition example
// void add(int a, int b) {
//     cout << "Sum: " << a + b;
// }

// void add(double a, double b) {
//     cout << "Sum: " << a + b;
// }

// int main() {
//     add(10, 20);
//     add(10.5, 20.6);
//     return 0;
// }

// Write program explaining function overloading?

void print(int i){
    cout << "Printing int: " << i << endl;
}

void print(double f){
    cout << "Printing float: " << f << endl;
}

void print(char* c){
    cout << "Printing character: " << c << endl;
}

int main() {
    print(10);
    print(10.5);
    print("Hello");
    return 0;
}