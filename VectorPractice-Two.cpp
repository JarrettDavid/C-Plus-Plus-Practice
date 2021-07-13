/******************************************************************************

                              Vector Test Number Two
    1. Create a vector template that allows for strings and integers to be
    output; 
    2. Main allows for user input at the start with a string to break it; 
    3. Print values from the vector values.

*******************************************************************************/

#include <iostream>
#include <string>
#include <vector>

template <typename Object>
/*Function to print all value in a vector - Start*/
void VectorPrint (const std::vector<Object> &inputVector)
{
    int vSize = inputVector.size();
    bool vEmpty = inputVector.empty(); //checks for an empty vector
    
    //checks if the vector is empty. If not empty print all values else tell user to add values
    if(vEmpty == false)
    {
        std::cout<<"Your vector contents are as follows:"<<std::endl;
        for(int i = 0; i <= (vSize-1); i++)
        {
            //checks if i is equal to the bound of the vector
            if(i != (vSize-1))
            {
                std::cout<<inputVector[i]<<", ";
            }
            else
            {
                std::cout<<inputVector[i];
            }
        }//end of for loop
    }
    else
    {
        std::cout<<"Your vector is empty. Please add some values!"<<std::endl;
    }//end of check for empty vector.
}
/* End of teVectorPrint*/

using namespace std;


int main()
{
    int max = 2; //maximum number of values to be added into vector
    int insertVal; //used for inserting values into the vector in the last position
    int inputCount = 0; //used for determining the current value entered;
    
    //vector<int> testVector; //create an empty integer vector
    vector<string> testVector; //create an empty string vector
    

    
    //adds multiples of 3 to the vector
    /*
    for(int p = 0; p <= (max-1); p++)
    {
        insertVal = p*3;
        testVector.push_back(insertVal);
    }
    */
    //allows user to add input to the vector from the command line
    cout<<"Please enter your values into the vector. When you are finished type in the string stop or STOP"<<endl;
    for(string line; getline(cin, line); inputCount <= max)
    {
        if(line != "stop")
            testVector.push_back(line);
        else
            break;
        inputCount+=1;
    }
    
    //calling the Vector Print function
    VectorPrint(testVector);
    return 0;
}