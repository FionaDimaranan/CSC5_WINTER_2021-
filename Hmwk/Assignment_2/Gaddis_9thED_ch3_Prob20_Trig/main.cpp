/* 
 * File:   main.cpp
 * Author: fiona
 * Created on January 13, 2019, 6:16 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float PI=3.141592;

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int inpAng;   //inputted angle
    float radians;  //converted from degrees to radians
    //Initialize or input i.e. set variable values

    //Map inputs -> outputs
    
    //Display the outputs
    
    cout<<"Calculate trig functions"<<endl;
    cout<<"Input the angle in degrees."<<endl;
    cin>>inpAng;
    
    radians=inpAng*(PI/180);
    
    cout<<fixed;
    cout<<setprecision(0)<<"sin("<<inpAng<<") = "<<setprecision(4)<<sin(radians)<<endl;
    cout<<setprecision(0)<<"cos("<<inpAng<<") = "<<setprecision(4)<<cos(radians)<<endl;
    cout<<setprecision(0)<<"tan("<<inpAng<<") = "<<setprecision(4)<<tan(radians);
    
    
    //Exit stage right or left!
    return 0;
}