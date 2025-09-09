#include <bits/stdc++.h>
using namespace std;

int binary_search(vector<int> v, int x)
{
    // Has complexity of O(log(n))
    int left = 0;
    int right = v.size() - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (x == v[mid])
        {
            return mid;
        }
        else
        {
            if (x > v[mid])
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {1, 2, 3, 5, 6, 6, 9};
    int x = 6;
    int res = binary_search(arr, x);
    cout << "Index of " << x << " in the arr is: " << res;
    return 0;
}