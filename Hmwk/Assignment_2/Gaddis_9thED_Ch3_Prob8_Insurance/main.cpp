/* 
 * File:   main.cpp
 * Author: fiona
 * Created on January 12, 2021, 7:50 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    unsigned int repCst, //replacement cost of house
                 minIns; //minimum insurance to be bought.
        
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout<<"Insurance Calculator"<<endl;
    cout<<"How much is your house worth?"<<endl;
    
    cin>>repCst;
    
    minIns=0.80f*repCst;
    
    cout<<"You need $"<<minIns<<" of insurance.";
    //Exit stage right or left!
    return 0;
}