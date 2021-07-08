/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include<stdio.h>
#include<stdlib.h>

void SumCheck(int sum, int size, int num, int *Array)
{
    int diff;
    diff = sum - num;
    
    for(int ik = 0; ik <= size; ik++)
    {
        if(diff == Array[ik])
        {
            std::cout <<std::endl;
            std::cout <<"*======================Start-of-Sum-Check======================*"<<std::endl;
            std::cout << "I have found the difference!!!" <<std::endl;
            std::cout << num <<" plus " << diff <<" equals "<< sum <<std::endl;
            std::cout <<"*=======================End-of-Sum-Check=======================*"<<std::endl;
            std::cout <<std::endl;
        }
    }
}

void MergeHalves(int *L, int *R, int *arr, int leftSize, int rightSize, int sum)
{
    int diff;
    int i = 0;
    int j = 0;
    int k = 0;
    int nL = leftSize;
    int nR = rightSize;
    
    std::cout <<std::endl;
    /*std::cout <<"======================Start-of-Merge-Halves======================"<<std::endl;*/
    while( i < nL && j < nR )
    {
        if(L[i] < R[j])
        {
            arr[k] = L[i];
            /*
            std::cout << i <<". The current left side value chosen " << L[i] <<std::endl;
            std::cout << k <<". The chosen value placed in arr is " << arr[k] <<std::endl;
            */
            SumCheck(sum, nR, L[i], R);
            i++;
        } else {
            arr[k] = R[j];
            /*
            std::cout << j <<". The current right side value chosen " << R[j] <<std::endl;
            std::cout << k <<". The chosen value placed in arr is " << arr[k] <<std::endl;
            */
            SumCheck(sum, nL, R[j], L);
            j++;
        }
        k++;
    }
    while( i < nL )
    {
        arr[k] = L[i];
        /*
        std::cout << i <<". The current left side value chosen leftover " << L[i] <<std::endl;
        std::cout << k <<". The chosen value placed in arr is " << arr[k] <<std::endl;
        */
        SumCheck(sum, nR, L[i], R);
        i++;
        k++;
    }
    while( j < nR )
    {
        arr[k] = R[j];
        /*
        std::cout << j <<". The current right side value chosen leftover " << R[j] <<std::endl;
        std::cout << k <<". The chosen value placed in arr is " << arr[k] <<std::endl;
        */
        SumCheck(sum, nL, R[j], L);
        j++;
        k++;
    }
    /*std::cout <<"=======================End-of-Merge-Halves======================="<<std::endl;*/
    std::cout <<std::endl;
}

void MergeSort(int *arr, int length, int sum)
{
    int middle, diff;
    
    if(length < 2) 
        return;
    
    if(length % 2 == 0 )
        middle = (length / 2);
    else
        middle = ((length - 1) / 2);

    int rightS = length - middle;
    
    int *Left  = (int*)malloc(middle * sizeof(int));
    int *Right = (int*)malloc(rightS * sizeof(int));
    
    for(int l = 0; l <= middle-1; l++)
    {
        Left[l] = arr[l];
    }//end of left for loop setup
    
    for(int r = middle; r <= length; r++)
    {
        Right[r - middle] = arr[r];
    }//end of Right for loop setup
    
/*    
    for(int checkLeft = 0; checkLeft <= middle - 1; checkLeft++)
        std::cout << checkLeft <<". The Left array value " << Left[checkLeft] <<std::endl;
        
    for(int checkRight = 0; checkRight <= (rightS - 1); checkRight++)
        std::cout << checkRight <<". The Right array value " << Right[checkRight] <<std::endl;
*/
    MergeSort(Left, middle, sum);
    MergeSort(Right, (length-middle), sum);
    MergeHalves(Left, Right, arr, middle, length-middle, sum);
    
    free(Left);
    free(Right);
}

using namespace std;

int main()
{
    /*
        Option 1. recursive call where you feed the first value in 
        Option 2. hashing
        Option 3. Merge Sort 
    */
    
  int check, diff, mSize1;
  
  int arr[] = {8, 7, 2, 9, 5, 3, 1, 6, 4};
 
  int k = 0;
  int sum = 10;
  int arrSize = sizeof(arr)/sizeof(arr[0]);
  

  MergeSort(arr, arrSize, sum);
  
  cout << endl;
  cout << endl;
  for(int ind = 0; ind <= (arrSize - 1); ind++)
     cout << ind <<". The current array value " << arr[ind] <<endl;
    
  return 0;
}//end of main function