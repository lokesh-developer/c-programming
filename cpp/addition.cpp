#include<iostream>
using namespace std;

class addition {
    public:
        int add(int a, int b) {
            return a + b;
        }
};

int main() {
    addition obj;
    cout << obj.add(10, 20);
    return 0;
}