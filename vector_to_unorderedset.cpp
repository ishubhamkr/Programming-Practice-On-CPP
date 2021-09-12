#include<bits/stdc++.h>
#include <iostream>
#include <set>
#include <map>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int j =0;j<n;j++)
        cin >> vec[j];
    std::set<int> s(vec.begin(), vec.end());

    for (auto i : s)
        std::cout << i << ' ';

    return 0;
}
