/******************************************************************************
                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.
*******************************************************************************/

#include <iostream>
#include "IntCell.h"

using namespace std;

int main()
{
    IntCell Test;
    IntCell *A = new IntCell;
    IntCell *B = new IntCell;
    IntCell *C = new IntCell;
    IntCell *D = new IntCell;
    
    double average = 0.0;
    const vector<int> test1{3, 5, 7, 23, 75, 98, 99, 203, 2, 4, 6, 8};
    const vector<int> test2(3, 203);
    
    
    Test.write(156);
    A->write(25);
    B->write(225);
    C->write(5);
    D->write(201);
    
    cout << "The Read Output: "<< Test.read() << endl;

    cout << "Pointer Read Output A: "<< A->read() << endl;
    A->previous = NULL;
    A->next = B;
    cout << "Pointer Read Output A pointing to B "<< A->next->read() << endl;

    cout << "Pointer Read Output B: "<< B->read() << endl;    
    B->previous = A;
    B->next = C;
    cout << "Pointer Read Output B pointing to C "<< B->next->read() << endl;

    cout << "Pointer Read Output C: "<< C->read() << endl;
    C->previous = B;
    C->next = D;
    cout << "Pointer Read Output C pointing to D "<< C->next->read() << endl;
    
    cout << "Pointer Read Output D: "<< D->read() << endl;
    D->previous = C;
    D->next = A;
    cout << "Pointer Read Output D pointing to A "<< D->next->read() << endl;
    
    //cout << "Pointer Read Output A + D: "<< (A->read() + D->read()) << endl;
    cout << "Pointer Address Output For &A: "<< &A << " and &D: "<< &D << endl;
    
    cout << "The vector test results: " << endl;
    Test.vecttest();
    
    average = Test.avg(test2, average);
    cout << "The Test Value Average After: " << average << endl;
    
    delete A;
    delete B;
    delete C;
    delete D;
    return 0;
}