/* 
 * File:   main.cpp
 * Author: fiona dimaranan
 * Created on January 17, 2021, 5:07 PM
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
    unsigned short number;      //inputted number to be converted
    
    //Initialize or input i.e. set variable values
    cout<<"Arabic to Roman numeral conversion."<<endl;
    cout<<"Input the integer to convert."<<endl;
    cin>>number;
    //Map inputs -> outputs
    //To determine how many 1's,10's,100's,1000's
    unsigned char n1,n10,n100,n1000;
    n1=number%10;
    n10=number%100/10;
    n100=number%1000/100;
    n1000=number/1000;
    
   
    //Display the outputs
    if (number>=1000&&number<=3000)
    {
        cout<<number<<" is equal to "; 
    
        if (n1000==1) cout<<"M";
        else if (n1000==2) cout<<"MM";
        else if (n1000==3) cout<<"MMM";
    
        if (n100==1) cout<<"C";
        else if (n100==2) cout<<"CC";
        else if (n100==3) cout<<"CCC";
        else if (n100==4) cout<<"CD";
        else if (n100==5) cout<<"D";
        else if (n100==6) cout<<"DC";
        else if (n100==7) cout<<"DCC";
        else if (n100==8) cout<<"DCCC";
        else if (n100==9) cout<<"CM";
    
        if (n10==1) cout<<"X";
        else if (n10==2) cout<<"XX";
        else if (n10==3) cout<<"XXX";
        else if (n10==4) cout<<"XL";
        else if (n10==5) cout<<"L";
        else if (n10==6) cout<<"LX";
        else if (n10==7) cout<<"LXX";
        else if (n10==8) cout<<"LXXX";
        else if (n10==9) cout<<"XC";
    
        if (n1==1) cout<<"I";
        else if (n1==2) cout<<"II";
        else if (n1==3) cout<<"III";
        else if (n1==4) cout<<"IV";
        else if (n1==5) cout<<"V";
        else if (n1==6) cout<<"VI";
        else if (n1==7) cout<<"VII";
        else if (n1==8) cout<<"VIII";
        else if (n1==9) cout<<"IX";
    }
    
    else if (number<1000||number>3000)
        cout<<number<<" is Out of Range!";
    
    //Exit stage right or left!
    return 0;
}

