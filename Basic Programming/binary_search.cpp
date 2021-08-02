#include<bits/stdc++.h>

using namespace std;

int binarysearch(int arr[], int n, int k)
{
        int x=-1;
        int start=0;
        int mid;
        int end=n-1;
        while(start<=end)
        {
            mid=(end+start)/2;
            if(arr[mid]==k)
            {
                x=mid;
                return x;
            }
            else
            {
                if(k>arr[mid])
                {
                    start=mid+1;
                }
                else
                {
                    end=mid;
                }
            }
        }
        return x;
}

int main()
{
    int n,k,z;
    cin>>n;
    int arr[n];
    for(int i{0};i<n;i++)
        {
            cin>>arr[i];
        }
    cin>>k;
    z=binarysearch(arr,n,k);
    cout<<z;
}
