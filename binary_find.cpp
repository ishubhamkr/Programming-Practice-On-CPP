#include<bits/stdc++.h>
using namespace std;

int Search(vector<int>arr ,int i, int j)
{
    int mid;
    if(i==j)
    {
        if(arr[i]==i)
            return i;
    }
    else
    {
        if(arr[i]==i)
            return i;
        else if(arr[j]==j)
            return j;
        else
        {
            mid=(i+j)/2;
            if(arr[mid]=mid)
                return mid;
            else
            {
                if(arr[mid]>mid)
                {
                    return (Search(arr,i+1,mid-1));
                }
                else
                {
                    return (Search(arr,mid+1,j-1));
                }
            }
        }

    }
}

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int start=0;
        vector<int> vec(n);

        for(int i =0;i<n;i++)
            cin >> vec[i];
        cout << (Search(vec,start,n-1)+1) << "\n";

    }
}
