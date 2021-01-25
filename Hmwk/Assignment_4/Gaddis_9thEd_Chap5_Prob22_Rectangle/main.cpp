/* 
 * File:   main.cpp
 * Author: fiona dimaranan
 * Created on January 21, 2021, 6:14 PM
 * Purpose:  Gaddis_9thEd_Chap5_Prob22_Rectangle
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
    unsigned int inpNum;        //number inputted by user 
    char         letter;
    //Initialize or input i.e. set variable values
    cin>>inpNum;
    cin>>letter;
    
    //Map inputs -> outputs
    for (int i=0; i<inpNum-1; i++)
	{
		for (int y=0; y<inpNum-1; y++)
		{
			cout<<letter;
		}
		cout<<letter<<endl;
	}
	for (int j=0;j<inpNum;j++)
	{
	    cout<<letter;
	}
       
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

