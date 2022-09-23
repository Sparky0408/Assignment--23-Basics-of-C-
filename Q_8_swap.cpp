#include <iostream>
using namespace std;
int main()
{
    int a, b;

    cout << "enter first number: ";

    cin >> a;

    cout << "enter second number: ";

    cin >> b;

    a = a + b;

    b = a - b;

    a = a - b;

    cout << "after swaping numner: " << endl;

    cout << "first number = " << a << " second number = " << b;

    return 0;
}