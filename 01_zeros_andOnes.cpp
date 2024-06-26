// Sort an array containing of only 0's and 1's. 
// all the zeros of array comes to the left side and all the right side of the array comes to the right side.
// This question can not be done by two pointer.

#include<iostream>
#include<vector>
using namespace std;
void sortZeroesAndOnes(vector<int>&v)  // pass by reference.
{
    int countZeroes = 0;
    for(int ele:v)
    {
        if(ele==0)
        {
            countZeroes++;
        }
    }
    for(int i=0;i<v.size();i++)
    {
        if(i<countZeroes)
        {
            v[i]=0;
        }
        else
        {
            v[i]=1;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sortZeroesAndOnes(v);

    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
}