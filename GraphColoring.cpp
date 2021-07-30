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
            cout<<"The label name is: "<<label<<endl;
            cout<<"The colour name is: "<<colour<<endl;
        }//end of PrintColour

        void PrintNeighbors()
        {
            cout<<"The neighbors of "<<label<<" are: "<<endl;
            for(int index = 0; index <= (neighbors.size() - 1); index++)
            {
               cout<<" - "<<neighbors[index].label<<" The colour is "<<neighbors[index].colour<<endl;
            }
        }//end of PrintGraph
        
        void SetNeighborColour(string label, string color )
        {
            if(color != "used" || color != "none")
            {
                for(int index = 0; index <= (neighbors.size() - 1); index++)
                {
                    cout<<" - "<<neighbors[index].label<<endl;
                    if(label == neighbors[index].label)
                    {
                        cout<<" label found "<<neighbors[index].label<<endl;
                        neighbors[index].colour = color;
                        index = (neighbors.size() - 1);
                    }
                }
            }
            else
                cout<<"Can not set colour to "<<color<<endl;
        }//end of SetNeighborColour
        
        string CheckNeighborsColour()
        {
            string currentColour;
            vector<string> temp = availableColours;
            int size = neighbors.size();
            
            for(int j = 0; j <= (temp.size()-1); j++)
            {
                if(colour == temp[j])
                    temp[j] = "used";
            }//end removed parent colour from vector loop
            
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

    A.SetColour("Red");
    
    A.neighbors.push_back(B);
    A.neighbors.push_back(C);
    A.neighbors.push_back(D);
    A.neighbors.push_back(E);
    
    //A.PrintNeighbors();
    
    A.SetNeighborColour("B", A.CheckNeighborsColour());
    A.SetNeighborColour("C", A.CheckNeighborsColour());
    
    B.PrintColour();
    
    A.PrintNeighbors();
    
    return 0;
}//end of main