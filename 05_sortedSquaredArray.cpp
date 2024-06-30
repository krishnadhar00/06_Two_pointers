// Given an integer array 'a' sorted in non decreasing order, return an array of the squares of each number sorted in non-decreasing order.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sortedSquaredArrays(vector<int>&v)
{
    vector<int>ans;
    int left_ptr = 0;
    int right_ptr = v.size()-1;
    while(left_ptr<=right_ptr)
    {
        if(abs(v[left_ptr]) < abs(v[right_ptr]))
        {
            ans.push_back(v[right_ptr]*v[right_ptr]);
            right_ptr--;
        }
        else
        {
            ans.push_back(v[left_ptr]*v[left_ptr]);
            left_ptr++;
        }
    }
    reverse(ans.begin(),ans.end());
    for(int i=0;i<v.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}
int main()
{
    int size;
    cin>>size;
    vector<int>v(size);
    for(int i=0;i<size;i++)
    {
        cin>>v[i];
    }
    sortedSquaredArrays(v);
}