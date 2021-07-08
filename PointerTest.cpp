/*************************************************************
*
*             Pointer Class Test 
*
*************************************************************/

#include <iostream>
#include <stdio.h>

class PointerTest {

    //declaration of public pointer variable
    public:
        int testVal; //used for storing value of test pointer value
        int size; //used for storing the size of the test array
        int *testArray = new int(); //used for storing temporary array values publically
        
        //int pointer constructor
        PointerTest(int test = 7) : storeValue(test){}

        //int pointer array constructor
        PointerTest(int Array[], int newSize)
        {
            size = newSize;
            for(int i = 0; i <= (size - 1); i++)
            {
                storeArray[i] = Array[i];
            }
        }
        
        //print the int value stored in the pointer variable
        int PrintPtrVal() const 
        {
            return storeValue;
        }

        //print the values stored in the pointer array
        void PrintPtrArray()
        {
            std::cout<<std::endl;
            //std::cout<<"The test array size is: "<<size<<std::endl; //used for debugging
            for(int i = 0; i <= (size - 1); i++)
            {
                std::cout<<storeArray[i]<<" ";
            }
            std::cout<<std::endl;
        }
        
        
    private:
        int storeValue; //used for storing pointer value privately
        int *storeArray = new int(); //used for storing temporary array values privately
        
        //pointer destructor
        ~PointerTest(void)
        {
            size = 0;
            testVal = 0;
            storeValue = 0;
            
            delete[] testArray;
            delete[] storeArray;
        }


};//end of SubArrayCheck


int main() {

    using namespace std;
    
    //creating an int array
    int Test[] = {1,2,3,5,6,7,8,12,435,4,32,7,976};
    int Test2[] = {980,2,6547,5,56079,6,657,98,12,56,4234,32,7,45};
    
    //get the size of the int array
    int s = sizeof(Test)/sizeof(Test[0]);
    int s2 = sizeof(Test2)/sizeof(Test2[0]);
    
    //declaring the class pointer variables
    PointerTest *test1 = new PointerTest(23); //int constructor called
    PointerTest *test2 = new PointerTest(47); //int constructor called
    PointerTest *test3 = new PointerTest(Test, s); //array constructor called
    
    //setting the value of the public variables in the class
    test1->testVal = 75; //int
    test2->testVal = 97; //int
    test3->testArray = Test2; //array
    
    cout<<"The current value in testVal 1: "<<test1->testVal<<endl;
    cout<<"The recently stored ptr value test 1: "<<test1->PrintPtrVal()<<endl;
    
    //storing values in the public dynamic array in the class
    for(int x = 0; x <= 10; x++)
    {
        test1->testArray[x] = (x * 2);
    }

    //printing the values in the public dynamic array in the class
    cout<<"The values in test 1 testArray:"<<endl;
    for(int xi = 0; xi <= 10; xi++)
    {
        cout<<test1->testArray[xi]<<" ";
    }
    cout<<endl;
    cout<<endl;

    
    cout<<"The current value in testVal 2: "<<test2->testVal<<endl;
    cout<<"The recently stored ptr value test 2: "<<test2->PrintPtrVal()<<endl;
    
    //storing values in the public dynamic array in the class
    for(int y = 0; y <= 10; y++)
    {
        test2->testArray[y] = (y * 6 + 2);
    }
    
    //printing the values in the public dynamic array in the class
    cout<<"The values in test 2 testArray:"<<endl;
    for(int yi = 0; yi <= 10; yi++)
    {
        cout<<test2->testArray[yi]<<" ";
    }
    cout<<endl;
    cout<<endl;
    
    //print out the values in the constructor array
    cout<<"The values in test 3 storedArray:";
    test3->PrintPtrArray();

    cout<<"The values in test 3 testArray:"<<endl;
    for(int zi = 0; zi <= (s2 - 1); zi++)
    {
        cout<<test3->testArray[zi]<<" ";
    }
    cout<<endl;    
    
    return 0;
}//end of main