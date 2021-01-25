/* 
 * File:   main.cpp
 * Author: fiona
 * Created on January 13, 2021, 7:38 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float prAnSal,   //previous annual salary 
          retPay,   //retroactive 
          nAnSal,   //new annual salary
          nMnSal;   //new monthly salary
          
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout<<"Input previous annual salary."<<endl;
    cin>>prAnSal;
    
    retPay=0.076f*prAnSal/2;
    nAnSal=0.076f*prAnSal+prAnSal;
    nMnSal=nAnSal/12;
    
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Retroactive pay    = $"<<setw(7)<<retPay<<endl;
    cout<<"New annual salary  = $"<<setw(7)<<nAnSal<<endl;
    cout<<"New monthly salary = $"<<setw(7)<<nMnSal;
    
    //Exit stage right or left!
    return 0;
}