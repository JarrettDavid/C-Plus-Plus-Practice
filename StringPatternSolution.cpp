// you can use includes, for example:
// #include <algorithm>

#include <iostream>
#include <string>

//Function that takes a string and checks for matches, if AB, BA, CD or DC are found they are replaced with 00. All other character patterns are stored in a temp string
//this temp string is then fed back into the soultions function until. The code keeps running until no matches are found.

std::string solution(std::string & S) {
    bool match = false;
    bool no_match = true;
    char charOne;
    char charTwo;
    std::string temp = "";
    int size_s = S.length() - 1;
    //std::cout <<"The string unprocessed: " << S << std::endl;
    if (size_s > 0) {
        for (int indx = 0; indx <= size_s; indx++) {
            charOne = S[indx];
            /*
            std::cout << "The temp string: " << temp << std::endl;
            std::cout << S[indx] << " " << indx << std::endl;
            std::cout << S[indx + 1] << " " << indx + 1 << std::endl;
            */
            if (indx+1 <= size_s ) {
                charTwo = S[indx + 1];
                if ((charOne == 'A' && charTwo == 'B') || (charOne == 'B' && charTwo == 'A'))
                {
                    /*
                    std::cout << "One" << std::endl;
                    std::cout << charOne << " " << indx << std::endl;
                    std::cout << charTwo << " " << indx + 1 << std::endl;
                    */
                    S[indx] = ' ';
                    S[indx+1] = ' ';
                    match = true;
                    no_match = false;
                    //std::cout << "1. The no match value is: " << no_match << std::endl;
                    if (indx+1 != size_s)
                        indx += 1;
                } else {
                    match = false;
                }

                if ((charOne == 'C' && charTwo == 'D') || (charOne == 'D' && charTwo == 'C'))
                {
                    /*
                    std::cout << "two" << std::endl;
                    std::cout << charOne << " " << indx << std::endl;
                    std::cout << charTwo << " " << indx + 1 << std::endl;
                    */
                    S[indx] = ' ';
                    S[indx + 1] = ' ';
                    match = true;
                    no_match = false;
                    //std::cout << "2. The no match value is: " << no_match << std::endl;
                    if(indx+1 != size_s)
                        indx += 1;
                } else {
                    match = false;
                }

                if (match == false && S[indx] != ' ') {
                    temp.push_back(S[indx]);
                    //std::cout << "1. TEMP: " << temp << " " << indx << std::endl;
                }
            } else {
                if (S[indx] != ' ') {
                    temp.push_back(S[indx]);
                    //std::cout << "2. TEMP: " << temp << " " << indx << std::endl;
                }
            }
        }
        /*
        std::cout << "3. The no match value is: " << no_match << std::endl;
        std::cout << "3. TEMP: " << temp << std::endl;
        std::cout << "3. TEMP LENGTH A: " << temp.length() << std::endl;
        std::cout << "3. TEMP LENGTH B: " << temp.length()-1 << std::endl;
        */
        if (no_match == false && temp.length() > 0)
        {
            //std::cout << "The solution function is being called" << std::endl;
            solution(temp);
        }
        if (temp.length() == 0)
            temp = " ";
    } else {
        temp = S;
    }
    //std::cout << "B. Temp: " << temp << std::endl;
    return temp;
}

//Main function used for testing the code
int main() {
    std::string test1 = "CD";
    std::cout << "1. The test string is: " << test1 << std::endl;
    std::string result1 = "";
    result1 = solution(test1);
    std::cout << "1. The result is: " << result1 << std::endl;
    std::cout << std::endl;
    std::string test2 = "CCCCCCCC";
    std::cout << "2. The test string is: " << test2 << std::endl;
    std::string result2 = "";
    result2 = solution(test2);
    std::cout << "2. The result is: " << result2 << std::endl;
    std::cout << std::endl;
    std::string test3 = "ADBCACBDA";
    std::cout << "3. The test string is: " << test3 << std::endl;
    std::string result3 = "";
    result3 = solution(test3);
    std::cout << "3. The result is: " << result3 << std::endl;
    std::cout << std::endl;
    std::string test4 = "CABABD";
    std::cout << "4. The test string is: " << test4 << std::endl;
    std::string result4 = "";
    result4 = solution(test4);
    std::cout << "4. The result is: " << result4 << std::endl;
}