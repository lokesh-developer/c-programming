#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int n;
    cout << " Enter any number: ";
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "Even number \n";
    }
    else
    {
        cout << "Odd number \n";
    }
    system("pause");
    return 0;
}
