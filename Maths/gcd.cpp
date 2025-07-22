#include <bits/stdc++.h>
using namespace std;

// subtraction method
int gcd_old(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}

// optimised - division method - a always bigger that b
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        // if a < b; a % b = a
        return gcd(b, a % b);
    }
}

int main()
{
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    int res = gcd_old(a, b);
    cout << "The GCD: " << res;
}