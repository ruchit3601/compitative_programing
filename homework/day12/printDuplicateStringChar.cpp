#include <iostream>
using namespace std;

// void printDuplicateStringChar(string s)
// {
//     int count[26] = {};
//     for (int i = 0; i < s.length(); i++)
//     {
//         count[s[i]]++;
//     }
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (count[s[i]] > 1)
//         {
//             cout << "\n";
//             cout << s[i] << "  count = " << count[s[i]] << endl;
//             count[s[i]] = 0;
//         }
//     }
// }
void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[26] = {0};
    string s = "ruchitchudasama";
    for (int i = 0; i < s.length(); i++)
    {
        arr[s[i] - 'a']++;
    }
    printarr(arr, 26);
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > 1)
        {
            cout << "\n";
            cout << (char)(i + 'a') << " count = " << arr[i];
        }
    }
    return 0;
}