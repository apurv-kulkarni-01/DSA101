#include <bits/stdc++.h>
using namespace std;

// naive approach - will cause overflow for large n
int countTrailingZerosOld(int n)
{
    int i = 2;
    int count = 0;
    long long int factorial = 1;
    while (i <= n)
    {
        cout << "Current factorial: " << factorial << endl;
        factorial *= i;
        if (factorial % 10 == 0)
        {
            factorial /= 10;
            count++;
        }
        i++;
    }
    return count;
}

// efficient approach - will count number of 5s in the prime factorization of n!
//  traling zero count - n/5 + n/25 + n/125 + ...
int countTrailingZeros(int n)
{
    int zero_count = 0;
    for (int i = 5; i <= n; i *= 5)
    {
        zero_count += n / i;
    }
    return zero_count;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int result = countTrailingZeros(n);
    cout << "Number of trailing zeros in " << n << "! is: " << result << endl;
}