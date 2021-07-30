/******************************************************************************

                 Binary Search Tree Test Code
                        Started
               
*******************************************************************************/
class BinaryTree {
    public:
    
        BinaryTree() {}
        BinaryTree(int valTemp): val(valTemp) {}//end of BinaryTree
        BinaryTree(int valTemp, BinaryTree *leftTemp, BinaryTree *rightTemp): val(valTemp), left(leftTemp), right(rightTemp) {}//end of BinaryTree
        BinaryTree(int valTemp, BinaryTree *leftTemp, BinaryTree *rightTemp, BinaryTree *parentTemp) : 
            val(valTemp), left(leftTemp), right(rightTemp), parent(parentTemp) {}//end of BinaryTree

        void CreateMultipleTree(BinaryTree *input, int multiple, int max)
        {
            int temp1;
            
            int m = max;
            if(m >= 0)
            {
                temp1 = multiple * (m - (m-1));
                
                BinaryTree *tempNode1 = new BinaryTree(temp1);
                
                input->left = tempNode1;
                tempNode1->parent = input;
                
                m-=1;
                
                delete tempNode1;
                
                CreateMultipleTree(tempNode1, multiple, m);
            }
        }
        
        int printCheck()
        {
            return val;
        }
        
    private:
        int val;
        int left;
        BinaryTree *right;
        BinaryTree *parent = nullptr;
};

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    BinaryTree test(5);
    BinaryTree *test1 = new BinaryTree(5);
    BinaryTree *test2 = new BinaryTree(15, test1);
    cout<<test.printCheck()<<endl;
    cout<<test2->printCheck()<<endl;

    return 0;
}