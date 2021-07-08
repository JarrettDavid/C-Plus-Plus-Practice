/******************************************************************************
                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.
*******************************************************************************/
#include <iostream>
#include <string>

using namespace std;

int test(int x)
{
   if(x == 0)
		return x;
	else
	{	
	    cout <<"The current x value is: "<< test(x - 1) + x<<endl;
		return test(x - 1) + x;
	}	
}//end of test function

int main()
{
   int val;
   
   val = test(4);
   
   cout <<"\n\nThe value variable is: "<<val<<endl;
	return 0;
}//end of main