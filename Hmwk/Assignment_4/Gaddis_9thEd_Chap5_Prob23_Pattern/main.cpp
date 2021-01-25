/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
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
   int inpNum;
    //Initialize or input i.e. set variable values
    cin>>inpNum;

    //Map inputs -> outputs
    for (int i=1; i<=inpNum; i++)
	{
		for (int j=1; j<=i; j++)
		{
			cout<<"+";
		}
		cout<<endl<<endl;
	}
	for (int i=inpNum; i>=2; i--)
	{
	    for (int j=1; j<=i; j++)
	    {
	        cout<<"+";
	    }
	    cout<<endl<<endl;
	}
	cout<<"+";
	
    //Display the outputs

    //Exit stage right or left!
    return 0;
}
