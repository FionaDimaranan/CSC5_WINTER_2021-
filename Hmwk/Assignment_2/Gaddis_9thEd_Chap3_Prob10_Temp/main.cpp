/* 
 * File:   main.cpp
 * Author:fiona
 * Created on January 14, 2021, 1:36 PM
 * Purpose:  Write a program that converts Celsius temperatures to
 *  Fahrenheit temperatures
 * 
 * NOTE: code-e asks to convert Celsius temperatures to Fahrenheit, however the
  expected output requires from Fahrenheit to Celsius.
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
    float degF,     //degrees in fahrenheit
          degC;     //degrees in celsius
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout<<fixed<<showpoint<<setprecision(1);
        
    cout<<"Temperature Converter"<<endl;
    cout<<"Input Degrees Fahrenheit"<<endl;
    
    cin>>degF;

    degC=(degF-32)*(5.0/9.0);   //conversion equation 
    
    cout<<degF<<" Degrees Fahrenheit = "<<degC<<" Degrees Centigrade";
    //Exit stage right or left!
    return 0;
}