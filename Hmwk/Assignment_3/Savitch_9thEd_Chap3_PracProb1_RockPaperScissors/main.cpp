/* 
 * File:   main.cpp
 * Author: fiona
 * Created on January 14, 2021, 6:33 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
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
    char ch1,ch2;
    //Initialize or input i.e. set variable values
    cout<<"Rock Paper Scissors Game"<<endl;
    cout<<"Input Player 1 and Player 2 Choices"<<endl;
    cin>>ch1>>ch2;
    
    //Map inputs -> outputs
    if (ch1==ch2)
        cout<<"Nobody wins.";
        
    else if ((ch1=='p'||ch1=='P')&&(ch2=='r'||ch2=='R'))
        cout<<"Paper covers rock.";
    
    else if ((ch2=='p'||ch2=='P')&&(ch1=='r'||ch1=='R'))
        cout<<"Paper covers rock.";
    
    else if ((ch1=='p'||ch1=='P')&&(ch2=='s'||ch2=='S'))
        cout<<"Scissors cuts paper.";
       
    else if ((ch2=='p'||ch2=='P')&&(ch1=='s'||ch1=='S'))
        cout<<"Scissors cuts paper.";
     
    else if ((ch1=='r'||ch1=='R')&&(ch2=='s'||ch2=='S'))
        cout<<"Rock breaks scissors.";
        
    else if ((ch2=='r'||ch2=='R')&&(ch1=='s'||ch1=='S'))    
         cout<<"Rock breaks scissors.";
         
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

