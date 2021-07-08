#ifndef IntCell_H
#define IntCell_H

#include <vector>
#include <bits/stdc++.h>//needed to compile on OnlineGDB

class IntCell
{
    public:
        IntCell *next;
        IntCell *previous;
        
        explicit IntCell(int initialValue = 0);
        int read() const;
        void write( int initialValue );
        void vecttest();
        double avg(const std::vector<int> & trial, double avgVal);
    
    private:
        int storeValue;
};
#endif