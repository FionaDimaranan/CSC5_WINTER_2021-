/* 
 * File:   main.cpp
 * Author:fiona dimaranan
 * Created on January 21, 2021, 6:01 PM
 * Purpose:  Gaddis_9thEd_Chap5_Prob1_Sum
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
    unsigned short inpNum,      //inputted number
                   totSum=0;    // sum of all integers
                   
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    for (int count = 1; count <= inpNum; count++)
    {cin>>inpNum;
    totSum+=count;}
    
    //Display the outputs
    cout<<"Sum = "<<totSum;
    //Exit stage right or left!
    return 0;
}
