#include<bits/stdc++.h>

using namespace std;

struct Pair
{
    int min;
    int max;
};

struct Pair getMinMax(int arr[], int low,int high)
{
    struct Pair minmax, mml, mmr;
    int mid;

    // If there is only one element
    if (low == high)
    {
        minmax.max = arr[low];
        minmax.min = arr[low];
        return minmax;
    }

    // If there are two elements
    if (high == low + 1)
    {
        if (arr[low] > arr[high])
        {
            minmax.max = arr[low];
            minmax.min = arr[high];
        }
        else
        {
            minmax.max = arr[high];
            minmax.min = arr[low];
        }
        return minmax;
    }

    // If there are more than 2 elements
    mid = (low + high) / 2;
    mml = getMinMax(arr, low, mid);
    mmr = getMinMax(arr, mid + 1, high);

    // Compare minimums of two parts
    if (mml.min < mmr.min)
        minmax.min = mml.min;
    else
        minmax.min = mmr.min;

    // Compare maximums of two parts
    if (mml.max > mmr.max)
        minmax.max = mml.max;
    else
        minmax.max = mmr.max;

    return minmax;
}


int main()
{
    int n;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n;
    int arr[n];
    for(int i{0};i<n;i++)
    {
        cin>>arr[i];
    }
    struct Pair minmax = getMinMax(arr, 0,n-1);
    cout << "Minimum element is "
         << minmax.min <<"\n";
    cout << "Maximum element is "
         << minmax.max;

    return 0;

}
