/* 
 * File:   main.cpp
 * Author:fiona dimaranan
 * Created on January 21, 2021, 6:06 PM
 * Purpose:  Gaddis_9thEd_Chap5_Prob7_PayInPennies
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
    unsigned int numDays=0,     //number of days worked
                 penSal=1,      //salary in pennies
                 totPay=0;      //total pay after number of days worked
                 
    //Initialize or input i.e. set variable values
    cin>>numDays;
    //Map inputs -> outputs
    while (numDays<=0){
        cout<<"Input invalid."<<endl;
        cout<<"Enter a number greater than 0.";
        cin>>numDays;
    }
    
    for (int i=1; i<=numDays; i++){
    totPay+=penSal;
    penSal=penSal*2;
    }
    
    //Display the outputs
    cout<<fixed<<showpoint<<setprecision(2)<<"Pay = $"<<totPay/100<<".";
    if ((totPay%100)<10){
        cout<<"0"<<totPay%100;
    }
    else if ((totPay%100)>=10){
        cout<<totPay%100;
    }
    //Exit stage right or left!
    return 0;
}

