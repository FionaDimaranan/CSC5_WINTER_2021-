/* 
 * File:   
 * Author: fiona dimaranan
 * Created on January 23 2021 
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

float inflate (float prYrAgo, float prTdy){
       float     infl;
    infl=((prTdy-prYrAgo)/prYrAgo)*100;
     return infl;
}
    float predict (float prYrAgo, float infRate){
        infRate=infRate/100;
        prYrAgo=prYrAgo+(prYrAgo*infRate);
        return prYrAgo;
}
//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float    prYrAgo,       //price a year ago
             prTdy,         //price today
             infRate;       //inflation rate
    char     repeat;
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    do {
    cout<<"Enter current price:"<<endl;
    cin>>prTdy;
    cout<<"Enter year-ago price:"<<endl;
    cin>>prYrAgo;
    
    cout<<fixed<<showpoint<<setprecision(2);
    infRate=((prTdy-prYrAgo)/prYrAgo)*100;
    
    cout<<"Inflation rate: "<<infRate<<"%"<<endl;
    cout<<endl;
    
    prYrAgo=prTdy;
    
    prYrAgo=predict(prYrAgo,infRate);
    cout<<"Price in one year: $"<<prYrAgo<<endl;
    
    prYrAgo=predict(prYrAgo,infRate);
    cout<<"Price in two year: $"<<prYrAgo<<endl;
    cout<<endl;
    
    cout<<"Again:"<<endl;
    cin>>repeat;
    
    if (repeat=='Y'||repeat=='y')
        cout<<endl;
    }
    while (repeat=='Y'||repeat=='y');
    
    //Exit stage right or left!
    return 0;
}