
//System Libraries
#include <iostream>    //Input/Output Stream Library
#include <cmath>
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float ppShr,fee, nShrs, sShr;//Price per share in $/share and fee as a percent

    //Share cost in $'s, Commission Paid in $'s, Total Paid in $'s
    float shrCost,comPaid,totPaid, comPaid2;
    
    //Initialize Variables by inputting from the command line
    ppShr=45.50;
    nShrs=1,000;
    sShr=56.90;
    fee=2;
    
    //Process or map the inputs to the outputs
    shrCost=ppShr*nShrs;
    comPaid=shrCost*fee/100;//Convert percentage to decimal
    comPaid2=comPaid*fee/100;
    totPaid=shrCost+comPaid2;
    
    //Display/Output all pertinent variables
    cout<<"Original Stock Price = "<<ppShr<<endl;
    cout<<"Commission fee    = "<<fee<<"%"<<endl;
    cout<<"Sold the Stock    = $"<<sShr<<endl;
    cout<<"Cost of shares    = $"<<shrCost<<endl;
    cout<<"Commission paid   = $"<<comPaid2<<endl;
    cout<<"Total amount paid = $"<<totPaid;
    
    //Exit the program
    return 0;
}