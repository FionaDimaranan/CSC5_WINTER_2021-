/* 
 * File:   main.cpp
 * Author:fiona
 * Created on January 18, 2021, 2:56 PM
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
    string horo1,horo2;
    
    //Initialize or input i.e. set variable values
    cout<<"Horoscope Program which examines compatible signs."<<endl;
    cout<<"Input 2 signs."<<endl;
    cin>>horo1>>horo2;
    
    //Map inputs -> outputs
    if ((horo1=="Leo"||horo1=="Aries"||horo1=="Sagittarius")&&(horo2=="Leo"||horo2=="Aries"||horo2=="Sagittarius"))
    {
        cout<<horo1<<" and "<<horo2<<" are compatible Fire signs.";
    }
    else if ((horo1=="Taurus"||horo1=="Virgo"||horo1=="Capricorn")&&(horo2=="Taurus"||horo2=="Virgo"||horo2=="Capricorn"))
    {
        cout<<horo1<<" and "<<horo2<<" are compatible Earth signs.";
    }
    else if ((horo1=="Gemini"||horo1=="Libra"||horo1=="Aquarius")&&(horo2=="Gemini"||horo2=="Libra"||horo2=="Aquarius"))
    {
        cout<<horo1<<" and "<<horo2<<" are compatible Air signs.";
    }
    else if ((horo1=="Cancer"||horo1=="Scorpio"||horo1=="Pisces")&&(horo2=="Cancer"||horo2=="Scorpio"||horo2=="Pisces"))
    {
        cout<<horo1<<" and "<<horo2<<" are compatible Water signs.";
    } 
    else cout<<horo1<<" and "<<horo2<<" are not compatible signs.";
    
    //Display the outputs
 
    //Exit stage right or left!
    return 0;
}

