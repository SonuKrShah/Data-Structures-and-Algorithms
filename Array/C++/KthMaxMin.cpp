#include <bits/stdc++.h>
using namespace std;

void BubbleKTimes(vector<int> a, int k){
    // for kth min element.
    // Just sort k element of the array
    if(k < 1 || k > a.size()){
        cout << "Enter a valid value of k " << endl;
        return;
    }
    for(int i = 0;i<k;i++){
        for(int j = i+1;j < a.size();j++){
            if(a[i] > a[j])
                swap(a[i], a[j]);
        }
    }

    cout << k << "th Smallest Element : " <<  a[k-1]<< endl;

    // Similarly for Max element
    for(int i = 0;i < a.size()-k - 1;i++){
        for(int j = i+1;j < a.size();j++){
            if(a[i] > a[j])
                swap(a[i], a[j]);
        }
    }
    cout << k << "th Largest Element : " <<  a[a.size()-k-1]<< endl;
}

int main() 
{
    vector<int> arr = {2, 1, 4, 3, 5,  7, 6,  9 ,8};
    int k;
    cout << "Enter the value of k : ";
    cin >> k;
    BubbleKTimes(arr, k);
    return 0;
}