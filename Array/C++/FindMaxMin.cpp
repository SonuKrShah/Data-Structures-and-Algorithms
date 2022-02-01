#include <bits/stdc++.h>
using namespace std;

struct Pair
{
    int min, max;
};

typedef struct Pair P;
void BruteForce(vector<int> arr)    // Simple Iterative Methods
{
    int min = INT_MAX, max = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        if (min > arr[i])
            min = arr[i];
        if (max < arr[i])
            max = arr[i];
    }

    cout << "Minimum : " << min << "\nMaximum : " << max << endl;
}

P Tournament(vector<int> a, int l, int u)   // Divide and conquer strategy
{
    P minmax, mml, mmr;
    if(l == u){
        minmax.min = a[l];
        minmax.max = a[l];
        return minmax;
    }

    if(l+1 == u){
        if(a[l] > a[u])
        {
            minmax.min = a[u];
            minmax.max = a[l];
        }
        else
        {
            minmax.min = a[l];
            minmax.max = a[u];
        }
    }

    int mid = (l + u) / 2;
    mml = Tournament(a, l, mid);
    mmr = Tournament(a, mid+1, u);

    if(mml.min < mmr.min)
        minmax.min = mml.min;
    else
        minmax.min = mmr.min;

    if(mml.max > mmr.max)
        minmax.max = mml.max;
    else
        minmax.max = mmr.max;

    return minmax;
}

void PrintPair(P a){
    cout << "Minimum : " << a.min << endl;
    cout << "Maximum : " << a.max << endl;
}
int main()
{
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    BruteForce(a);
    P minmax = Tournament(a, 0, a.size()-1);
    PrintPair(minmax);
    return 0;
}