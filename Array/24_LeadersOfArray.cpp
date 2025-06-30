#include<iostream>
#include<vector>
using namespace std;

vector<int> findLeaders(vector<int>& arr)
{
    vector<int> leaders;
    int n = arr.size();

    int max=arr[n-1];
    leaders.push_back(max);

    for(int i=n-2; i>=0; i--)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            leaders.push_back(max);
        }
    }
    return leaders;
}

int main()
{
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    vector<int> leaders = findLeaders(arr);

    cout << "Leaders in the array are: ";
    for(int i=leaders.size()-1; i>=0; i--)
    {
        cout << leaders[i] << " ";
    }
    cout << endl;

    return 0;
}