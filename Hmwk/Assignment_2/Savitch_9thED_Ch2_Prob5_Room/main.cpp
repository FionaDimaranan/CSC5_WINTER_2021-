/* 
 * File:   main.cpp
 * Author: fiona dimaranan
 * Created on January 13, 2021, 1:02 PM
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
    unsigned maxCap,        //maximum room capacity
             numPpl,        //input number of people
             redPpl,        //number of people to reduce by to fit max capacity
             incPpl;        //amount of people that can be included to fit within max capacity
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout<<"Input the maximum room capacity and the number of people"<<endl;
    cin>>maxCap>>numPpl;
    
    redPpl=numPpl-maxCap;
    incPpl=maxCap-numPpl;
    
    if (numPpl>maxCap)
        cout<<"Meeting cannot be held.\n"<<"Reduce number of people by "<<redPpl<<" to avoid fire violation.";
    else if (numPpl<=maxCap)
        cout<<"Meeting can be held.\n"<<"Increase number of people by "<<incPpl<<" will be allowed without violation.";
        
    //Exit stage right or left!
    return 0;
}