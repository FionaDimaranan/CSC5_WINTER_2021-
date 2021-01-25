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
    float   gasLit1,
            gasLit2,
            gasGal1,
            gasGal2,
            mpg1,
            mpg2;
    int     miles1,
            miles2;
    char    repeat;
    
    //Initialize or input i.e. set variable values

    //Map inputs -> outputs
    
    //Display the outputs
    
    do{
    cout<<"Car 1"<<endl;
    cout<<"Enter number of liters of gasoline:"<<endl;
    cin>>gasLit1;
    cout<<"Enter number of miles traveled:"<<endl;
    cin>>miles1;
    
    gasGal1=gasLit1*CNVSLTG;
    mpg1=miles1/gasGal1;
    
    cout<<"miles per gallon: ";
    cout<<fixed<<showpoint<<setprecision(2)<<mpg1<<endl<<endl;
    
    
    
    cout<<"Car 2"<<endl;
    cout<<"Enter number of liters of gasoline:"<<endl;
    cin>>gasLit2;
    cout<<"Enter number of miles traveled:"<<endl;
    cin>>miles2;
    
    gasGal2=gasLit2*CNVSLTG;
    mpg2=miles2/gasGal2;
    
    cout<<"miles per gallon: ";
    cout<<fixed<<showpoint<<setprecision(2)<<mpg2<<endl<<endl;
    
    if (mpg1>mpg2){
        cout<<"Car 1 is more fuel efficient"<<endl;
        cout<<endl;
    }
    else if (mpg1<mpg2){
        cout<<"Car 2 is more fuel efficient"<<endl;
        cout<<endl;
    }
    
    cout<<"Again:"<<endl;
    cin>>repeat;
    
    if (repeat=='Y'||repeat=='y')
        cout<<endl;
    }
    while (repeat=='Y'||repeat=='y');
    
    
    //Exit stage right or left!
    return 0;
}

