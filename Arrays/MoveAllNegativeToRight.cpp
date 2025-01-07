#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>nums{1, -2 , -3 , 5 , 7 , 8, -9, 4};
    vector<int>neg;
    int n = nums.size();
    int index = 0;

    //index to track positive values

    for(int i=0;i<n;i++)
    {
        if(nums[i]>0)
        {
            nums[index] = nums[i];
            index++;
        }
        else
        {
            neg.push_back(nums[i]);
        }
    }
    //now move all negative numbers to the nums array
    for(int i=0;i<neg.size();i++)
    {
        nums[index] = neg[i];
        index++;
    }

    //print the final array
    for(int i=0;i<n;i++)
    {
        cout<<nums[i]<<" ";
    }

    return 0;

}