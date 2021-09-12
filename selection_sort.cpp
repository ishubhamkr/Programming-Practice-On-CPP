#include<bits/stdc++.h>
using namespace std;

int selection_sort(vector<int> &arr ,int n)
{
    int min_idx;
    for(int i=0;i<n;i++)
    {
        min_idx = i;
        for (int j = i+1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        swap(arr[min_idx], arr[i]);
    }
}



int main()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i =0;i<n;i++)
        cin >> vec[i];

    selection_sort(vec, n);

    cout << "\nSorted array is \n";
    for (int i = 0; i < n; i++)
        cout << vec[i] << " ";
}
