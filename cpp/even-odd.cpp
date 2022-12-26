// #include <iostream>
// #include <cstdlib>
// using namespace std;
// int main()
// {
//     int n;
//     cout << " Enter any number: ";
//     cin >> n;
//     if (n % 2 == 0)
//     {
//         cout << "Even number \n";
//     }
//     else
//     {
//         cout << "Odd number \n";
//     }
//     system("pause");
//     return 0;
// }

#include <iostream>
using namespace std;

class OddOrEven
{
private:
    int number;

public:
    void oddoreven(int n)
    {
        number = n;
        if (number % 2 == 0)
        {
            cout << number << " is an even number." << endl;
        }
        else
        {
            cout << number << " is an odd number." << endl;
        }
    }
};

int main()
{
    OddOrEven O;
    int number;

    cout << "Enter Number: ";
    cin >> number;
    O.oddoreven(number);

    return 0;
}
