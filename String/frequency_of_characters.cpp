#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    string s = "geeksforgeeks";
    // o/p each character in ascending order with its frequency

    int char_arr[26] = {0};
    for (int i = 0; i < s.length(); ++i)
    {
        char_arr[s[i] - 'a']++;
    }

    // printing the frequency by retrieving original character
    for (int i = 0; i < 26; ++i)
    {
        if (char_arr[i] != 0)
        {
            cout << (char)(i + 'a') << " - " << char_arr[i] << endl;
        }
    }
}