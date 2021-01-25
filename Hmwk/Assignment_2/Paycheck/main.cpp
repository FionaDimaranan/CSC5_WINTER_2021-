/* 
 * File:   main.cpp
 * Author:fiona dimaranan
 * Created on January 13, 2021, 6:16 PM
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
    float pRate,        //pay rate
          numHrs,       //number of hours worked
          grPay;        //gross pay
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout<<"This program calculates the gross paycheck."<<endl;
    cout<<"Input the pay rate in $'s/hr and the number of hours."<<endl;
    cin>>pRate>>numHrs;
    
    if(numHrs<=40)
        grPay=numHrs*pRate;
    else if (numHrs>=40)
        grPay=(40*pRate)+(numHrs-40)*(2*pRate);
    
    cout<<fixed<<showpoint<<setprecision(2)<<"Paycheck = $"<<setw(7)<<grPay;
    //Exit stage right or left!
    return 0;
}