#include<bits/stdc++.h>
using namespace std;

int bubble_sort(vector<int> &a ,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                swap(a[i],a[j]);
            }
        }
    }
}



int main()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i =0;i<n;i++)
        cin >> vec[i];

    bubble_sort(vec, n);

    cout << "\nSorted array is \n";
    for (int i = 0; i < n; i++)
        cout << vec[i] << " ";
}
