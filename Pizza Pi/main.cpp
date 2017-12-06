
//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    
    //Variables
    const int Slice = 14.125;
    const int pi = 3.14;
    float RadofPiza, AofPiza, NumofSlice;
    
    int DofPiza;

    //Ask user what the diameter is
    cout << "What is the Diameter of the pizza in inches" << endl;
    cin >> DofPiza;
    
    //Number of slices that is taken from a pizza of that diameter
    cout << fixed << setprecision (1);
    
    RadofPiza = DofPiza / 2;
    AofPiza = pi * RadofPiza * RadofPiza;
    NumofSlice = AofPiza / RadofPiza;
    
    
    //Number of Slices according to the info given
    cout << fixed << setprecision (1);
    cout << "The pizza will cut into " << NumofSlice << " slices." << endl;
    
    
    
    
    
    
    
    
    
    return 0;
}



