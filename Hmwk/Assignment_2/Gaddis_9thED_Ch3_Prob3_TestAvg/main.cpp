/* 
 * File:   main.cpp
 * Author: fiona dimaranan
 * Created on January 12, 2021, 11:32 AM
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
    float test1,test2,test3,test4,test5,avg;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout<<"Input 5 numbers to average."<<endl;
    
    cin>>test1>>test2>>test3>>test4>>test5;
    
    avg=(test1+test2+test3+test4+test5)/5.0f;
     
    cout<<showpoint<<setprecision(1)<<fixed<<"The average = "<<avg;
    
    //Exit stage right or left!
    return 0;
}