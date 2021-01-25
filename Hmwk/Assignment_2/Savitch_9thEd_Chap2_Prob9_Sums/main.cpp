/* 
 * File:   main.cpp
 * Author:fiona dimaranan
 * Created on January 14, 2021, 2:39 PM
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
    float number,       //input number
          sumPos,       //sum of all the numbers greater than zero
          sumNeg,       //sum of all the numbers less than zero
          totSum;       //sum of all the numbers 
    //Initialize or input i.e. set variable values
    
    cout<<"Input 10 numbers, any order, positive or negative"<<endl;
    totSum=sumNeg=sumPos=0;
    
    cin>>number; 
    number>0?sumPos+=number:sumNeg+=number;
        
    cin>>number; 
    number>0?sumPos+=number:sumNeg+=number;
    
    cin>>number; 
    number>0?sumPos+=number:sumNeg+=number;
    
    cin>>number; 
    number>0?sumPos+=number:sumNeg+=number;
    
    cin>>number; 
    number>0?sumPos+=number:sumNeg+=number;
    
    cin>>number; 
    number>0?sumPos+=number:sumNeg+=number;
    
    cin>>number; 
    number>0?sumPos+=number:sumNeg+=number;
    
    cin>>number; 
    number>0?sumPos+=number:sumNeg+=number;
    
    cin>>number; 
    number>0?sumPos+=number:sumNeg+=number;
    
    cin>>number; 
    number>0?sumPos+=number:sumNeg+=number;
    //Map inputs -> outputs
    totSum=sumPos+sumNeg;
    
    //Display the outputs
    cout<<"Negative sum ="<<setw(4)<<sumNeg<<endl;
    cout<<"Positive sum ="<<setw(4)<<sumPos<<endl;
    cout<<"Total sum    ="<<setw(4)<<totSum;
    
    //Exit stage right or left!
    return 0;
}