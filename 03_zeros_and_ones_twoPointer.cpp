// Sort an array containing of only 0's and 1's. 
// all the zeros of array comes to the left side and all the right side of the array comes to the right side.
// This can be done by using the two pointers. It reduces the two for loop which we ahve used in earlier case and make it easy to understood.

#include<iostream>
#include<vector>
using namespace std;
void sortZeroesAndOnes(vector<int>&v)  // pass by reference.
{
    // Using two pointer
    int left_ptr = 0;
    int right_ptr = v.size()-1;
    while (left_ptr<right_ptr)
    {
        if(v[left_ptr]==1 && v[right_ptr]==0)
        {
            v[left_ptr++]=0;
            v[right_ptr--]=1;
        }
        if(v[left_ptr]==0)
        {
            left_ptr++;
        }
        if(v[right_ptr]==1)
        {
            right_ptr--;
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