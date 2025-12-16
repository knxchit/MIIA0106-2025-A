#include <iostream>

using namespace std;


bool isPrime(int n)

{

    if (n <= 1) return false;

    for (int i = 2; i * i <= n; ++i)

    {

        if (n % i == 0) return false;

    }

    return true;

}

int main()

{

    int number;

    cout << "โปรแกรมตรวจสอบเลขจำนวนเฉพาะ" << endl;

    cout << "กรอกจำนวน: ";

    cin >> number;

    if (isPrime(number))

    {

        cout << number << " เป็นจำนวนเฉพาะ\n";

    }

    else

    {

        cout << number << " ไม่เป็นจำนวนเฉพาะ\n";

    }

    return 0;

}