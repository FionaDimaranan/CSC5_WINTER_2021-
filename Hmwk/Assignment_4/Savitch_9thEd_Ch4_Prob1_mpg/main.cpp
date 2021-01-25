/* 
 * File:   
 * Author: fiona dimaranan
 * Created on: January 23, 2021
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
const float CNVSLTG=0.264179;
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float   gasLit,
            gasGal,
            mpg;
    int     miles;
    char    repeat;
    
    //Initialize or input i.e. set variable values

    //Map inputs -> outputs
    
    //Display the outputs
    do{
    
    cout<<"Enter number of liters of gasoline:"<<endl;
    cin>>gasLit;
    cout<<endl;
    cout<<"Enter number of miles traveled:"<<endl;
    cout<<endl;
    cin>>miles;
    
    gasGal=gasLit*CNVSLTG;
    mpg=miles/gasGal;
    
    cout<<"miles per gallon:"<<endl;
    cout<<fixed<<showpoint<<setprecision(2)<<mpg<<endl;
    
    cout<<"Again:"<<endl;
    cin>>repeat;
    
    if (repeat=='Y'||repeat=='y')
        cout<<endl;
    }
    while (repeat=='Y'||repeat=='y');
    
    
    //Exit stage right or left!
    return 0;
}

