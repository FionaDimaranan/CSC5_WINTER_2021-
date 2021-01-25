/* 
 * File:   main.cpp
 * Author: fiona
 * Created on January 11, 2021, 2:51 PM
 * Purpose: calculate the military budget as a percentage of the federal budget
 for:
Federal Budget ->  $4.1 trillion 
Military Budget -> $700 billion
 */

//System Libraries
#include <iostream> //I/O/Library
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal Constants, High Dimensional Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the random number seed
    
    //Declare Variables
    float milBdgt,      //Military budget
          fedBdgt,      //Federal budget
          mlPrcnt;      //Military budget as % of federal
    
    //Initialize Variables
    milBdgt=7.0e11f;        //Military budget=700 billion
    fedBdgt=4.1e12f;        //Federal budget=4.1 trillion
    
    //map inputs to outputs -> process
    mlPrcnt=(milBdgt/fedBdgt)*100;
    
    //display inputs/outputs
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"The military budget is "<<mlPrcnt<<"% of the federal budget."<<endl;
    
    //exit program-cleanup
    return 0;
}

