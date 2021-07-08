class IntCell
{
    public:
        /*Temp is a public variable used for test*/
        int temp = 78;

        /*IntCell Constructor*/
        explicit IntCell( int initialValue  = 0 ) : storeValue(initialValue){}
        
        
        /*IntCell Read method used for returning all non zero values stored in public or private variables*/
        int Read() const
        {
            if(storeValue == 0)
            {
                return temp;
            }   
            else
            {
                return storeValue;
            }

        }//end of Read
        
        /*IntCell Write method used for chancing either the temp variable if the value is not equal to zero or the currently stored value*/
        void Write( int initialValue )
        {
            if(storeValue == 0 && initialValue != 0)
                temp = initialValue;
            else
                storeValue = initialValue;
        }//end of Write
        
    private:
        int storeValue;
};

#include <iostream>

using namespace std;

int main()
{

   IntCell objTest1(5);
   IntCell objTest2;

   cout << "Current objTest1 stored value: " << objTest1.Read() << endl;
   cout << "Current objTest2 stored value: " << objTest2.Read() << endl;   

   objTest1.temp = 182;

   cout << "Current objTest1 temp value: " << objTest1.temp << endl;
   cout << "Current objTest2 temp value: " << objTest2.temp << endl;
   
   objTest2.Write(7);
   objTest1.Write(27);

   cout << "New objTest1 stored value: " << objTest1.Read() << endl;
   cout << "New objTest2 stored value: " << objTest2.Read() << endl;
   
   cout << "New objTest1 temp value: " << objTest1.temp << endl;
   cout << "New objTest2 temp value: " << objTest2.temp << endl;
   
   return 0;
   
}//end of main