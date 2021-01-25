/* 
 * File:   main.cpp
 * Author: fiona
 * Created on January 14, 2021, 1:43 PM
 * Purpose:  Gaddis_9thEd_Chap4_Prob8_SortNames
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string name1,name2,name3;
    
    //Initialize or input i.e. set variable values
    cout<<"Sorting Names"<<endl;
    cout<<"Input 3 names"<<endl;
    
    getline(cin,name1);
    
    getline(cin,name2);
   
    getline(cin,name3);
    
    //Map inputs -> outputs
    if ((name1<name2)&&(name2<name3))
        cout<<name1<<endl<<name2<<endl<<name3;
        
    if ((name1<name3)&&(name3<name2))
        cout<<name1<<endl<<name3<<endl<<name2;
        
    if ((name2<name1)&&(name1<name3))
        cout<<name2<<endl<<name1<<endl<<name3;
        
    if ((name2<name3)&&(name3<name1))
        cout<<name2<<endl<<name3<<endl<<name1;
        
    if((name3<name2)&&(name2<name1))
        cout<<name3<<endl<<name2<<endl<<name1;
        
    if((name3<name1)&&(name1<name2))
        cout<<name3<<endl<<name1<<endl<<name2;
        
    //Display the outputs
    
    //Exit stage right or left!
    return 0;
}