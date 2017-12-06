/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on September 25, 2017, 9:04 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
//declare variable
    const unsigned short BSCKES=48;
    unsigned short nCookes;
    float sugar,butter,flour;
    
    //initialize variables
    sugar = 1.5f; //cups of sugar
    butter = 1.0f; //cups of butter
    flour = 2.75f; //cups of flour
    
    //Input Data/Variables
    cout << "this program calculates the amount of ingredients " << 
            "for cookie recipe" << endl;
    cout<<"Input the number of cookies you would like to make"<<endl;
    cin>>nCookes;
   
    //Process or Map the inputs to the outputs
    sugar*=(static_cast<float>(nCookes)/BSCKES);
    butter*=(static_cast<float>(nCookes)/BSCKES);
    flour*=(static_cast<float>(nCookes)/BSCKES);

    //Display/Output all pertinent variables
    cout<<"Your Ingredients should have the following quantity for "<<
            nCookes<<" cookies"<<endl;
    cout << "Sugar = "<<sugar<<" cups"<<endl;
    cout << "Butter = "<<butter<<" cups"<<endl;
    cout << "Flour = "<<flour<<" cups"<<endl;
    
    //End Program
    
    return 0;
}

