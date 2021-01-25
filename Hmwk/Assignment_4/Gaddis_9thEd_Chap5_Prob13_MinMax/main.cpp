/* 
 * File:   main.cpp
 * Author:fiona dimaranan
 * Created on January 21, 2021, 6:02 PM
 * Purpose:  Gaddis_9thEd_Chap5_Prob13_MinMax
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
    int   inpNum,
          largNum,
          smalNum;
    const int      stopNum=-99;
    
    //Initialize or input i.e. set variable values
    cin>>inpNum;
    smalNum=largNum=inpNum;
    
    while(inpNum!=-99)
    {
        if (inpNum<smalNum)
        smalNum=inpNum;
        
        if (inpNum>largNum)
        largNum=inpNum;
      
        cin>>inpNum;
    }
    //Map inputs -> outputs
    
    //Display the outputs
    cout<<"Smallest number in the series is "<<smalNum<<endl;
    cout<<"Largest  number in the series is "<<largNum;
    //Exit stage right or left!
    return 0;
}