#include <bits/stdc++.h>
using namespace std;

bool palindrome_no(int n)
{
    if (n / 10 == 0)
    {
        return true;
    }
    int copy = n;
    int m = 0;
    while (copy > 0)
    {
        // m += copy%10;            dumb
        m = m * 10 + copy % 10;
        copy /= 10;
    }
    if (m == n)
    {
        return true;
    }
    else
        return false;
}

int main()
{
    int x = 87578;
    bool res = palindrome_no(x);
    cout << res;
}