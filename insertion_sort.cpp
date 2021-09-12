#include<bits/stdc++.h>
using namespace std;

int insertion_sort(vector<int> &arr)
{
    int i, key, j;
    int n=arr.size();
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i =0;i<n;i++)
    {
        cin >> vec[i];
    }
    insertion_sort(vec);

    cout << "\nSorted array is \n";
    for (int i = 0; i < n; i++)
        cout << vec[i] << " ";
}
