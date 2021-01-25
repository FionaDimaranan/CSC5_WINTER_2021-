/* 
 * File:   main.cpp
 * Author: fiona
 * Created on January 7, 2021, 11:40 PM
 * Purpose: Energy Drink
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
    unsigned short cstSurv, //number of customer surveyed
                   purEngy, //number of customers purchased energy drinks
                   purCit;  //number customers purchasing citrus drinks
    float          prcEngy, //percentage surveyed consuming energy drinks
                   prcCit;  //percentage citrus
    
    //Initialize Variables
    cstSurv=16500;
    prcEngy=0.15f;
    prcCit=0.058f;
    
    //map inputs to outputs -> process
    purEngy=cstSurv*prcEngy;
    purCit=purEngy*prcCit;
    
    //display inputs/outputs
    cout<<"Total Customers Surveyed = "<<cstSurv<<endl;
    cout<<"Customers that are purchasing one or more energy drinks per week = "
         <<purEngy<<endl;
    cout<<"Customers that are Citrus Drinkers = " <<purCit<<endl;
    
    
    //exit program-cleanup
    return 0;
}

