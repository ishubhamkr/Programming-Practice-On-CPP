#include<bits/stdc++.h>

using namespace std;

int power(int x, unsigned int y)
{
    if (y == 0)
        return 1;
    else if (y % 2 == 0)
        return power(x, y / 2) * power(x, y / 2);
    else
        return x * power(x, y / 2) * power(x, y / 2);
}

int main()
{
    int n;
    unsigned int x;
    cin>>n>>x;
    int z;
    z=pow(n,x);
    cout<<z;
}
