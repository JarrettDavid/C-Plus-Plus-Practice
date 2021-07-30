/******************************************************************************

                              Vector Test Number One
    1. Create a vector; 
    2. Insert Values into vector; 
    3. Create function to print vector values.

*******************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

/*Function to print all value in a vector - Start*/
void VectorPrint (const vector<int> & Test)
{
    int vSize = Test.size();
    bool vEmpty = Test.empty(); //checks for an empty vector
    
    //checks if the vector is empty. If not empty print all values else tell user to add values
    if(vEmpty == false)
    {
        cout<<"Your vector contents are as follows:"<<endl;
        for(int i = 0; i <= (vSize-1); i++)
        {
            //checks if i is equal to the bound of the vector
            if(i != (vSize-1))
            {
                cout<<Test[i]<<", ";
            }
            else
            {
                cout<<Test[i];
            }
        }//end of for loop
    }
    else
    {
        cout<<"Your vector is empty. Please add some values!"<<endl;
    }//end of check for empty vector.
}
/* End of VectorPrint*/

int main()
{
    int max = 25; //maximum number of values to be added into vector
    int insertVal; //used for inserting values into the vector in the last position

    vector<int> testVector; //create an empty integer vector
    
    //adds multiples of 3 to the vector
    for(int p = 0; p <= (max-1); p++)
    {
        insertVal = p*3;
        testVector.push_back(insertVal);
    }
    
    //calling the Vector Print function
    VectorPrint(testVector);
    return 0;
}
