#include <bits/stdc++.h>
using namespace std;

// T.C. O(sqrt(n))
bool check_prime(int a)
{
    if (a == 1)
        return false;
    if (a == 2 || a == 3)
        return true;

    if (a % 2 == 0 || a % 3 == 0)
    {
        return false;
    }

    for (int i = 5; i * i <= a; i += 6)
    {
        if (a % i == 0 || a % (i + 2) == 0)
            return false;
    }
    return true;
}

int main()
{
    int a;
    cout << "Enter a number: ";
    cin >> a;
    bool res = check_prime(a);
    cout << "The number " << a << " is " << ((res == 1) ? "Prime" : "Not Prime");
}