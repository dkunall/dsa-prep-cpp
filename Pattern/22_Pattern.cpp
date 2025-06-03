/*
4444444
4333334
4322234
4321234
4322234
4333334
*/

#include <bits/stdc++.h>
using namespace std;

void pattern22(int n)
{
     // Outer loop for no. of rows
     for(int i=0;i<2*n-1;i++){
         
         // inner loop for no. of columns.
         for(int j=0;j<2*n-1;j++){
             
             // Initialising the top, down, left and right indices of a cell.
             int top = i;
             int bottom = j;
             int right = (2*n - 2) - j;
             int left = (2*n - 2) - i;
             
            
             cout<<(n- min(min(top,bottom), min(left,right)))<<" ";
         }
         
         cout<<endl;
     }
      
}

int main()
{   
    int N = 4;
    
    pattern22(N);

    return 0;
}