#include<bits/stdc++.h>
using namespace std;

#define N 2

void multiply(int mat1[][N],
              int mat2[][N],
              int res[][N])
{
    int i, j, k;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            res[i][j] = 0;
            for (k = 0; k < N; k++)
                res[i][j] += mat1[i][k] * mat2[k][j];
        }
    }
}


int main(){
    int n;
    cout<<"Value of n for n*n matrix";
    cin>>n;
    int arr[n][n];
    for(int i{0};i<n;i++){
        for(int j{0};j<n;j++)
            cin>>arr[i][j];
    }

    int brr[n][n];
    for(int i{0};i<n;i++){
        for(int j{0};j<n;j++)
            cin>>arr[i][j];
    }
    int res[n][n];
    multiply(arr, brr, res);

    cout << "Result matrix is \n";

    for(int i{0};i<n;i++){
        for(int j{0};j<n;j++)
            cout<<res[i][j]<<" ";
        cout<<"\n";
    }
}
