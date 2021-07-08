/******************************************************************************
                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.
*******************************************************************************/
#include <iostream>
#include <string>

class IntCell
{
    public:
        IntCell()
        {
            storeValue = 0;
        }
        
        IntCell(int x)
        {
            storeValue = x; 
        }
        
        int write(int y)
        {
            storeValue = y;
            return storeValue;
        }
        
        void read() const
        {
            std::cout << storeValue <<std::endl;
        }
    
    private:
        int storeValue;
};//end of IntCell

using namespace std;

int main()
{
   int val = 9;
   IntCell obj;
   
   obj.read();
   
   obj.write(val);
   obj.read();
   
	return 0;
}//end of main