/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// This program is a driver that tests a function comparing the
// contents of two int arrays

#include <iostream>
#include <vector>
using namespace std;
// Function Prototype
//changed to accept vecror in function
bool testPIN(vector <int>, vector <int>, int);

int main()
{
    const int NUM_DIGITS = 7;   // Number of digits in a PIN
 //changed arrays to vectors
  vector<int> pin1 {2, 4, 1, 8, 7, 9, 0};   // Base set of values
  vector<int> pin2 {2, 4, 6, 8, 7, 9, 0};   // Only 1 element is different from pin1
    
    vector<int> pin3 {1, 2, 3, 4, 5, 6, 7};   // All elements are different from pin1
    
    if (testPIN(pin1, pin2, NUM_DIGITS))
        std::cout << "ERROR: pin1 and pin2 report to be the same.\n";
    else
        std::cout << "SUCCESS: pin1 and pin2 are different.\n";
        
    if (testPIN(pin1, pin3, NUM_DIGITS))
        std::cout << "ERROR: pin1 and pin3 report to be the same.\n";
    else
        std::cout << "SUCCESS: pin1 and pin3 are different.\n";
        
    if (testPIN(pin1, pin1, NUM_DIGITS))
        std::cout << "SUCCESS: pin1 and pin1 report to be the same.\n";
    else
        std::cout << "ERROR: pin1 and pin1 report to be different.\n";
    
    return 0;
}

//****************************************************************
// The following function accepts two int arrays. The arrays are *
// compared. If they contain the same values, true is returned.  *
// If they contain different values, false is returned.          *
//****************************************************************

bool testPIN( vector<int>custPIN, vector<int>databasePIN, int size){
    
    for (int index = 0; index < size; index++){
        if (custPIN[index] != databasePIN[index])
            return false;   // We've found two different values.
    }
    return true;    // If we make it this far, the values are the same.
}