/

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    
    //Ticket Prices
    const int Class_A_Price = 15.0;
    const int Class_B_Price = 12.0;
    const int Class_C_Price = 9.0;
    
    //Variables
    int ATikets; // Number of class A tickets sold
    int BTikets; // Number of class B tickets sold
    int CTikets; // Number of class C tickets sold
    float total; // Total earned from tickets sold
    
    //Input Class A tickets sold
    cout << "Enter the amount of Class A tickets bought: ";
    cin >> ATikets;
    
    //Input Class B tickets sold
    cout << "Enter the amount of Class B tickets bought: ";
    cin >> BTikets;
    
    //Input Class C tickets sold
    cout << "Enter the amount of Class C tickets bought: ";
    cin >> CTikets;
    
    //Calculate total earned from tickets sold
    total = (ATikets * Class_A_Price) + (BTikets * Class_B_Price) +
            (CTikets * Class_C_Price);

            //Overall Earned from sold Tickets
            cout << "The total earned from ticket sales is $" << setprecision(2) 
            << fixed << total <<endl;
    
    return 0;
}



