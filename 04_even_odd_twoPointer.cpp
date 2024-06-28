// Given an array of integers 'a' move all the even integers at the begining of the array followed by all the odd integers. The relative order of odd and even integers does not matter. Return any array that satisfies the condition.

#include<iostream>
#include<vector>
using namespace std;
void sortEvenAndOddNumbers(vector<int>&v)
{
    int left_ptr = 0;
    int right_ptr = v.size()-1;
    while(left_ptr<right_ptr)
    {
        if(v[left_ptr]%2!=0 && v[right_ptr]%2==0)
        {
            // swap(v[left_ptr++],v[right_ptr--]);
            int temp;
            temp = v[right_ptr];
            v[right_ptr] = v[left_ptr];
            v[left_ptr] = temp;
            left_ptr++;
            right_ptr--;

            // Without using temp 
            /*
            a = a+b;
            b = a-b;
            a = a-b;
            */
        }
        if(v[left_ptr]%2==0)
        {
            left_ptr++;
        }
        if(v[right_ptr]%2!=0)
        {
            right_ptr--;
        }
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
    sortEvenAndOddNumbers(v);

    for(int i=0;i<size;i++)
    {
        cout<<v[i]<<" ";
    }
}