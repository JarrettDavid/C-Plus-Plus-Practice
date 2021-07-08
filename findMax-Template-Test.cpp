/******************************************************************************

                 Code for finding the max value in an 
               ordered vector using function templating
               
*******************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

template <typename Comparable>

const Comparable & findMax( const vector <Comparable> & a )
{
    int maxIndex = 0;
    for(int i = 1; i < a.size(); i++)
    {
        if(a[maxIndex] < a[i])
        {
            maxIndex = i;
        }
    }
    std::cout<<"The max index is: "<<maxIndex<<std::endl;
    return a[maxIndex];
}



int main()
{
   vector<int> v1(37);
   int y = 0;
   for(int x = 0; x <= (v1.size()-1); x++)
   { 

        if((x % 2) == 0 )
          v1[x] = (x*2)+4;
        else
          v1[x] = (x*7)+13;

    cout<<v1[x]<<',';
   }
   cout<<endl;
   cout<<endl;
   cout << findMax(v1) << endl;

    return 0;
}
