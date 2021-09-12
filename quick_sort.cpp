#include<bits/stdc++.h>
using namespace std;

int part(vector<int> &a ,int i, int j)
{
    int p;
    p=i;
    int x=a[p];
    for(int k=i+1;k<=j;k++)
    {
        if(a[k]<=x)
        {
            i=i+1;
            swap(a[i],a[k]);
        }
    }
    swap(a[i],a[p]);
    return i;
}

int quick_sort(vector<int> &a ,int i, int j)
{
    if(i<j)
    {
        int m = part(a,i,j);
        quick_sort(a,i,m-1);
        quick_sort(a,m+1,j);
    }
}



int main()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i =0;i<n;i++)
        cin >> vec[i];

    quick_sort(vec, 0, n - 1);

    cout << "\nSorted array is \n";
    for (int i = 0; i < n; i++)
        cout << vec[i] << " ";
}
