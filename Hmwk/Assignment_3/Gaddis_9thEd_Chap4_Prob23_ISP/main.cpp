/* 
 * File:   main.cpp
 * Author: fiona
 * Created on January 15, 2021, 10:42 PM
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
    char pkg;
    float hours,        //inputted hours
          provHrs,      //provided hours
          addHrs,       //additional hours charge
          monChrg,      //monthly charge
          totChrg;  
        
    //Initialize or input i.e. set variable values
    cout<<"ISP Bill"<<endl;
    cout<<"Input Package and Hours"<<endl;
    cin>>pkg>>hours;
   
    //Map inputs -> outputs
       switch (pkg)
    { 
         case 'A':
            {
                monChrg=9.95f;
                provHrs=10;
                addHrs=2;
                break;
            }       
         case 'B':
            {
                monChrg=14.95f;
                provHrs=20;
                addHrs=1;
                break;
            }
         case 'C':
            {
                monChrg=19.95f;
                provHrs=0;
                addHrs=0;
                break;
            }
    }
    
      if (hours>provHrs)
        monChrg+=addHrs*(hours-provHrs);
     
   
    //Display the outputs
    cout<<fixed<<showpoint<<setprecision(2)<<"Bill = $ "<<setw(5)<<monChrg;
    
    //Exit stage right or left!
    return 0;
}