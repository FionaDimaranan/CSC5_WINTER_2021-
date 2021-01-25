/* 
 * File:   main.cpp
 * Author: fiona
 * Created on January 12, 2021, 10:20 AM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>      //Input/Output Library
#include <iomanip>      //formatting library
#include <cstdlib>      //random number function
#include <ctime>        //time library to set random number seed

using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float CNVENGM=453.592;      //conversion lbs to grams

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    string name;
    float massMs=35,        //mass mouse 35 grams
          massKms=5,        //mass of sweetener to kill mouse
          massCoke=350,     //mass of 1 can of diet coke
          concent=0.001f,   //concentration of sweetener in can of diet coke
          wDieter;          //weight of dieter
    int nCans;              //number of cans of diet coke
            
    //Initialize or input i.e. set variable values
    cout<<"Program to calculate the limit of Soda Pop Consumption."<<endl;
    cout<<"Input the desired dieters weight in lbs."<<endl;
    cin>>wDieter;
    
  
    
    //Map inputs -> outputs
    nCans=(massKms*wDieter*CNVENGM)/(massMs*massCoke*concent);
            
    //Display the outputs
    cout<<"The maximum number of soda pop cans"<<endl;
    cout<<"which can be consumed is "<<nCans<<" cans";
            
    //Exit stage right or left!
    return 0;
}