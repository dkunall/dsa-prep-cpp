#include<iostream>
#include<vector>
using namespace std;

int MaximumConsecutivesOnes(vector<int> &arr)
{
    int n=arr.size();
    if(n==0) return 0; 
    if(n==1) return arr[0];

    int count=0;
    int maxCount=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            count++;
            maxCount = max(maxCount, count);
        }
        else
        {
            count=0;
        }
    }
    return maxCount;
}

int main()
{
    vector<int> arr = {1,1,1,1,1,1,1,0, 0, 1, 1, 0, 1, 1, 1};
    cout << "Maximum consecutive ones: " << MaximumConsecutivesOnes(arr) << endl;
    return 0;
}