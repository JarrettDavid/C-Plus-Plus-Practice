/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    /*
        Option 1. recursive call where you feed the first value in 
        Option 2. hashing
        Option 3. Merge Sort
    */
    
  int arr[] = {8, 7, 2, 6, 5, 3, 1};
  int arr1[] = {0};
  int arr2[] = {0};

  int k;
  int diff;
  int check;
  int mSize1;
  int sum = 10;
  int arrSize = sizeof(arr)/sizeof(arr[0]);
  
  if((arrSize % 2) == 0)
     mSize1 = (arrSize / 2);
  else
     mSize1 = ((arrSize - 1) / 2) ;
     
  for(int i = 0; i <= (mSize1 - 1); i++)
  {
    arr1[i] = arr[i];
    cout << i <<". The value of arr is 1: " << arr1[i] <<endl;
    check = sum - arr[i];
    
    for(int ii = 0; ii <= (mSize1 - 1); ii++)
    {
        if(check == arr[ii])
        {
            cout << ii <<". The value of arr is ii found: " << arr[ii] <<endl;
            cout << arr[i] <<" plus " << arr[ii] <<" equals "<< sum <<endl;            
        }
    }
  }//end of outter for loop

  diff = (mSize1 + 1);
  for(int j = (mSize1 + 1); j <= (arrSize - 1); j++)
  {
    k = diff - j;
    arr2[k] = arr[j];
    cout << j <<". The value of arr is 2: " << arr2[k] <<endl;
    check = sum - arr[j];
    
    for(int jj = (mSize1 + 1); jj <= (mSize1 - 1); jj++)
    {
        if(check == arr[jj])
        {
            cout << jj <<". The value of arr is jj found: " << arr[jj] <<endl;
            cout << arr[j] <<" plus " << arr[jj] <<" equals "<< sum <<endl;            
        }
    }
  }//end of outter for loop  
  return 0;
}//end of main function
