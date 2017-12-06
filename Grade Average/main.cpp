//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    short grade1;// Grades
    short grade2;
    short grade3;
    short grade4;
    short grade5;
    short total;
    short grades;
    short average; // Average of Grades
 
    //Input Data/Variables
    cout<<"This program calculates the average of your grades"<<endl;
    cout<<"Input your first grade"<<endl;
    cin>>grade1;
   
    cout<<"Input your second grade"<<endl;
    cin>>grade2;
    
    cout<<"Input your third grade"<<endl;
    cin>>grade3;
    
    cout<<"Input your fourth grade"<<endl;
    cin>>grade4;
    
    cout<<"Input your fifth grade"<<endl;
    cin>>grade5;
    
    //Process or map the inputs to the outputs
    grades = 5 * 1;
    total=grade1+grade2+grade3+grade4+grade5;
    average=total/grades;
    
    //Display/Output all pertinent variables
    cout<<average<<" Average = "<<total<<" total / "<<grades<<" grades."<<endl;
    
    //Exit the program
    return 0;
}