
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
    const int SliceEat = 4;
    float RadofPiza, AofPiza, NumofSlice, PizaSold;
    
    //user reply
    int DofPiza;
    int DofPizza;
    int pplAttnd;

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
    cout << endl;
    
    //People at the party
    cout << "How many friends are at the party? " << endl;
    cin >> pplAttnd;
    
    //Size of Pizzas Sold
    cout << "What size pizza will you be ordering?" << endl;
    cin >> DofPizza;
    
    //Number of pizzas needed to be bought
    PizaSold = pplAttnd * (NumofSlice / SliceEat);
    
    //Pizzas that need to be sold
    cout << PizaSold << " pizzas must be ordered to feed everyone." << endl;
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}



