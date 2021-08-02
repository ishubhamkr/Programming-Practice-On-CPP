#include<bits/stdc++.h>

using namespace std;

class Solution {

public :
    std::pair<int, int> twoSum(vector<int>& nums, int target)
    {
            vector<pair<int,int> > v;
            for(int i=0;i<nums.size();i++)
                v.push_back({nums[i],i});

            sort(v.begin(),v.end());
            int i=0;
            int j=v.size()-1;
            int idx1=0;
            int idx2=0;
            while(i<j)
            {
                if(v[i].first+v[j].first==target)
                {
                    idx1=v[i].second;
                    idx2=v[j].second;
                    break;

                }
                if(v[i].first+v[j].first<target)
                    i++;
                if(v[i].first+v[j].first>target)
                    j--;
            }
            return std::make_pair(idx1,idx2);

    }
};


int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,sear;
    cin >> n;
    int start=0;
    vector<int> vec(n);

    for(int i =0;i<n;i++)
    {
        cin >> vec[i];
    }
    cin>>sear;
    Solution s ;
    pair <int, int> p = s.twoSum (vec, sear);
    cout << p.first << " " << p.second;
}
