#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


void RotateLeftOne(vector<int> &arr) 
{
    int first=arr[0];
    for(int i=0;i<arr.size()-1;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[arr.size()-1]=first;
}

int main() 
{
    vector<int> arr = {1, 2, 3, 4, 5};
    RotateLeftOne(arr);
    
    for(int i=0; i<arr.size(); i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}