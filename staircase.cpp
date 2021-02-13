#include <bits/stdc++.h>

using namespace std;

void staircase(int n) 
{
    int i;
    for(i=0;i<n;i++)
    {
        
        for(int j=0;j<(n-i-1);j++)
        {
            cout<<" ";
        }
        for(int k=(n-i-1);k<n;k++)
        {
            cout<<"#";
        }
        cout<<"\n";
    }

}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
