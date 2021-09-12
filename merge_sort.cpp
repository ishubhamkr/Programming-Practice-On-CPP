#include<bits/stdc++.h>
using namespace std;

int merg(vector<int> &arr, int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    /* create temp arrays */
    int L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there
    are any */
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
    are any */
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

int merge_sort(vector<int> &a ,int i, int j)
{

    if(i==j)
        return(a[i]);
    else
    {
        int mid = (i+j)/2;
        merge_sort(a,i,mid);
        merge_sort(a,mid+1,j);
        merg(a,i,mid,j);
    }
}



int main()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i =0;i<n;i++)
        cin >> vec[i];

    merge_sort(vec, 0, n - 1);

    cout << "\nSorted array is \n";
    for (int i = 0; i < n; i++)
        cout << vec[i] << " ";
}
