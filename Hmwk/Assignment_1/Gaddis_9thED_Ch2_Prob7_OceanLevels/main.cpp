/* 
 * File:   main.cpp
 * Author: fiona
 * Created on January 5, 2021, 3:04 PM
 * Purpose: Assuming the ocean’s level is currently rising at about 1.5mm
 per year, write a program that displays:
  - The number of millimeters higher than the current level that the ocean’s 
  level will be in 5 years 
  - The number of millimeters higher than the current level that the ocean’s 
  level will be in 7 years 
  - The number of millimeters higher than the current level that the ocean’s 
 level will be in 10 years
 */

//System Libraries
#include <iostream> //I/O/Library

using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal Constants, High Dimensional Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the random number seed
    
    //Declare Variables
    float curRis,     //current rising ocean level in mm 
          fveYr,      //predicted in five years
          svnYr,      //predicted in 7 years
          tenYr;      //predicted in ten years 
    //Initialize Variables
    curRis= 1.5 ;       //measured in mm
    //map inputs to outputs -> process
    fveYr=5*curRis;     //how many mm ocean level rose higher in 5 years
    svnYr=7*curRis;     //how many mm ocean level rose higher in 7 years
    tenYr=10*curRis;    //how many mm ocean level rose higher in 10 years
    //display inputs/outputs
    cout<<"In 5 years, the ocean level will be "<<fveYr<<"mm higher."<<endl;
    cout<<"In 7 years, the ocean level will be "<<svnYr<<"mm higher."<<endl;
    cout<<"In 10 years, the ocean level will be "<<tenYr<<"mm higher."<<endl;
    
    //exit program-cleanup
    return 0;
}

