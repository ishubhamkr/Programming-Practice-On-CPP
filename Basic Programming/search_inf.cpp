#include<bits/stdc++.h>

#define INF 999999999

using namespace std;

int inf(vector<int>arr ,int i, int j)
{
    int mid=(i+j)/2;
    if(arr[mid]==INF)
    {
        if(arr[mid-1]<INF)
        {
            return mid;
        }
        else
        {
            return inf(arr,i,mid-1);
        }
    }
    else
    {
        return inf(arr,mid,j);
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
        cout << (inf(vec,start,n-1)+1) << "\n";

    }
}
