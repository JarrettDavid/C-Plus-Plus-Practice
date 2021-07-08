#include "IntCell.h"

IntCell::IntCell(int initialValue) : storeValue (initialValue) {}//end of constructor function

int IntCell::read() const
{
    return storeValue;
}//end of read function

void IntCell::write(int value)
{
   storeValue = value;
}//end of write function


void IntCell::vecttest()
{
    std::vector<int> test{3, 5, 7, 23, 75, 98, 99, 203, 2, 4, 6, 8};
    int testSize = test.size();
    
    for(int x = 0; x <= testSize; x++)
    {
      std::cout<< x << ". original value: " << test[x] << " modified value: " << (x * test[x]) <<std::endl;
      test[x] = test[x] * x;
    }//end of for loop
}//end of vecttest

/* write function to find the average of a vector, use pass by reference.
Move the test vector in vecttest to the .h file under private
*/
double IntCell::avg(const std::vector<int> & trial, double avgVal)
{
    double avgTemp;
    int sumTemp;
    int vecSize = trial.size();
    
    for(int i = 0; i <= trial.size()-1; i++)
    {
        sumTemp += trial[i];
        std::cout << i << ". Trial value: " << trial[i] << std::endl;
    }//end of the for loop
    
    avgVal = sumTemp / vecSize;
    std::cout <<"vect Size value: " << sumTemp << std::endl;
    std::cout <<"vect Size value: " << vecSize << std::endl;
    return avgVal;
}//end of avg

//end of the IntCell function