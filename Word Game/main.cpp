
//System Libraries
#include <iostream>  //Input - Output Library

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    
    //Variables
    string name;
    string age;
    string city;
    string college;
    string profession;
    string animal;
    string petname;
    
    cout << "Hello Welcome to the Word Game!" << endl;
    
    cout << "Enter your name" << endl;
    cin >> name;
    
    cout << "Enter your age" << endl;
    cin >> age;
    
    cout << "Enter your city" << endl;
    cin >> city;
    
    cout << "Enter your college" << endl;
    cin >> college;
    
    cout << "Enter your profession" << endl;
    cin >> profession;
    
    cout << "Enter your favorite animal" << endl;
    cin >> animal;
    
    cout << "Give your anmial a creative name" << endl;
    cin >> petname;
    
    cout << "Interesting... Your story is..." << endl;
    
    cout << "There once was a person named " << name << " who lived in " << city
    << ". At the age of " << age << ", " << name << " went to college at "
    << college << ". " << name << " graduated and went to work as a " <<
    profession << ". Then, " << name << " adopted a(n) " << animal << " named "
    << petname << ". They both lived happily ever after!";
    
    
    
    
    
    
    return 0;
}



