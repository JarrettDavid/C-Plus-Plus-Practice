/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>

void SubArraySearch( int *arr, int size )
{
    std::string current = " ";
    int sumCheck;
    int start = 0;
    int check = 1;
    int runSum = 0;
    
    for( int i = 0; i <= (size - 1); i++)
    {
        if(check <= (size - 1))
        {
            sumCheck = arr[start] + arr[check] + runSum;
            current = current +' '+ std::to_string(arr[start]) +' '+ std::to_string(arr[check]);
            std::cout << "The Sum Check is value " <<sumCheck<<std::endl;
            std::cout << "The run Sum is value " <<runSum<<std::endl;
            if(runSum == 0)
            {
                runSum;
                sumCheck = 0;
                std::cout << "The Sum is zero!" <<std::endl;
                current = current +' '+ std::to_string(arr[check]);
                std::cout << "The current sub array: " <<current<<std::endl;
                start = start + 1;
                current = " ";
                check = start + 1;
                i = start;
            }
            else {
                if(runSum != 0)
                {
                    std::cout<<"Here I am right now!!!!"<<std::endl;
                    runSum = sumCheck;
                }
            }
            check++;
        }
    }
}

using namespace std;

int main()
{
    int Array[] =  {3,4,-7,3,1,3,1,-4,-2,-2};
    int arraySize = sizeof(Array)/sizeof(Array[0]);
    SubArraySearch(Array, arraySize);
    return 0;
}

