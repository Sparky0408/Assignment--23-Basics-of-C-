#include <iostream>
using namespace std;

int main()
{

    int arr[10], i, add = 0;

    cout << "enter 10 number: ";

    for (i = 0; i < 10; i++)
    {
        cin >> arr[i];
        add = add + arr[i];
    }

    cout << "the sum of array is " << add;

    return 0;
}
