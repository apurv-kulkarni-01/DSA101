#include <bits/stdc++.h>
using namespace std;

// T.C. = O(a*b - max(a,b))
int lcm_old(int a, int b)
{
    int res = max(a, b);
    while (true)
    {
        if (res % a == 0 && res % b == 0)
        {
            return res;
        }
        res++;
    }
    return res;
}

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }

    return gcd(b, a % b);
}

// a*b = gcd(a,b) * lcm(a,b)
int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    int res = lcm(a, b);
    cout << "The LCM of " << a << " and " << b << " is " << res;
}