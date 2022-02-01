// Reversing an Array.
// Here implementing different functions that can be used to reverse the array

// Note the inbuild function for reversing the array is  
// reverse(start_index, last_index);
#include <bits/stdc++.h>
using namespace std;

void BruteForce(vector<int> &a)
{
    // Here using simple swapping of first and last index.
    int n = a.size();
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        swap(a[i], a[j]);
    }
}

void Display(vector<int> a)
{
    for (auto i : a)
        cout << i << " ";
    cout << endl;
}

int main()
{
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    BruteForce(a);
    // reverse(a.begin(), a.end());             // Inbuild function
    Display(a);
    return 0;
}