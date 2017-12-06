//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    short tnkGas;   //Number of Gallons to fill your Tank
    short mlstnk;  //Miles driven on a tank of Gas
    short mpg;      //Miles per Gallon
 
    //Input Data/Variables
    cout<<"This program calculates miles per gallon"<<endl;
    cout<<"Input Number of Gallons held your car tank"<<endl;
    cin>>tnkGas;
    cout<<"Input miles driven till empty"<<endl;
    cin>>mlstnk;
    
    //Process or map the inputs to the outputs
    mpg=mlstnk/tnkGas;
    
    //Display/Output all pertinent variables
    cout<<mpg<<" mpg = "<<mlstnk<<" miles / "<<tnkGas<<" Gallons"<<endl;
    
    //Exit the program
    return 0;
}