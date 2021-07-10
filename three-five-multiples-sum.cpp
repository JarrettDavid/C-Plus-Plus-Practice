/******************************************************************************

 Finds the disctinct number of multiples of 3 or 5 and then calculate the sum 

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    int counter = 0;
    
    //iterating over numbers from 1 to 999
    for(int i = 1; i <= 999; i++)
    {
       //checks if multiple of 3 and not 5
        if((i % 3) == 0 && (i %5) != 0)
        {
              sum = sum + i;
              counter+=1;
        }
       //checks if multiple of 5 and not 3
        if((i % 5) == 0 && (i % 3) != 0)
        {
              sum = sum + i;
              counter+=1;
        }
    }
    //output the total sum as well as the number of total distinct multiples
    cout<<"The sum is: "<<sum<<endl;
    cout<<"The number of distinct multiples of 3 and 5 is: "<<counter<<endl;

    return 0;
}
