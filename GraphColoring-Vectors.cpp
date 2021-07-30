/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class GraphNode {
    public:
        string label;
        vector<GraphNode> neighbors;
        string colour = "none";
        
        GraphNode (string name) : label(name){}
        
        void SetColour(string newColour)
        {
            colour = newColour;
        }//end of SetColour
        
        void PrintGraph()
        {
            cout<<"The label name is: "<<label<<endl;
        }//end of PrintGraph
        
        void PrintColour()
        {
            cout<<"The colour name is: "<<colour<<endl;
        }//end of PrintColour

        void PrintNeighbors()
        {
            cout<<"The neighbors of "<<label<<" are: "<<endl;
            for(int index = 0; index <= (neighbors.size() - 1); index++)
            {
               cout<<" - "<<neighbors[index].label<<endl;
            }
        }//end of PrintGraph
        
        string CheckNeighborsColour()
        {
            string currentColour;
            vector<string> temp = availableColours;
            int size = neighbors.size();
            
            for(int i = 0; i <= (size-1); i++)
            {
                for(int j = 0; j <= (temp.size()-1); j++)
                {
                    cout<<"The neighbor is: "<<neighbors[i].label<<" The Colour is: "<<neighbors[i].colour<<endl;
                    if(neighbors[i].colour == temp[j])
                    {
                        cout<<temp[j]<<" has already been used"<<endl;
                        temp[j] = "used";
                    }
                    else
                    {
                        if(temp[j] != "used" && temp[j] != currentColour)
                            currentColour = temp[j];
                    }
                }//end of colour loop
            }//end of neighbors loop
            temp.clear();
            
            return currentColour;
        }//end of CheckNeighborsColour
        
    private:
        vector<string> availableColours = {"Red","Orange","Green","Purple","Blue","Yellow","Brown"};
};//end of GraphNode

int main() {

    GraphNode A("A");
    GraphNode B("B");
    GraphNode C("C");
    GraphNode D("D");
    GraphNode E("E");
    GraphNode F("F");
    GraphNode G("G");
    
    A.neighbors.push_back(B);
    A.neighbors.push_back(C);
    A.neighbors.push_back(D);
    A.neighbors.push_back(E);
    
    A.PrintNeighbors();
    
    A.SetColour("Red");
    B.SetColour("Red");
    
    cout<<A.CheckNeighborsColour()<<endl;
    
    B.PrintColour();
    
    return 0;
}//end of main