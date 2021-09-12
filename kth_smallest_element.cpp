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

int kth_smallest(vector<int> &a ,int i, int j, int k)
{
    if(i<j)
    {
        int m = part(a,i,j);
        if(m==k)
            return a[m];
        else if(k<m)
            kth_smallest(a,i,m-1,k);
        else
            kth_smallest(a,m+1,j,k);
    }
}



int main()
{
    int n,k;
    cout<<"Enter size of an array"<<"\n";
    cin >> n;
    vector<int> vec(n);
    cout<<"Enter array"<<"\n";
    for(int i =0;i<n;i++)
        cin >> vec[i];
    cout<<"Enter kth position"<<"\n";
    cin>>k;
    cout<<"kth smallest element is: ";
    cout<<kth_smallest(vec, 0, n - 1,k);
}
