#include <iostream>
using namespace std;

void swapByValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swapByReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a;
    int b;

    cout << "Enter value for a: ";
    cin >> a;
    cout << "Enter value for b: ";
    cin >> b;

    cout << "Before swap: a = " << a << ", b = " << b << endl;

    // Call by Value (does not modify originals)
    swapByValue(a, b);
    cout << "After swap (Call by Value): a = " << a << ", b = " << b << endl;

    // Call by Reference (modifies originals)
    swapByReference(a, b);
    cout << "After swap (Call by Reference): a = " << a << ", b = " << b << endl;

    return 0;
}