/* 
 * File:   main.cpp
 * Author: fiona
 * Created on January 14, 2021, 6:41 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>
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
    string run1,run2,run3;
    float time1,time2,time3;
    
    //Initialize or input i.e. set variable values
    cout<<"Race Ranking Program"<<endl;
    cout<<"Input 3 Runners"<<endl;
    cout<<"Their names, then their times"<<endl;
    cin>>run1>>time1;
    cin>>run2>>time2;
    cin>>run3>>time3;
    
    //Map inputs -> outputs
    if ((time1<time2)&&(time2<time3))
       {
           cout<<run1<<"\t"<<setw(3)<<time1<<endl;
           cout<<run2<<"\t"<<setw(3)<<time2<<endl;
           cout<<run3<<"\t"<<setw(3)<<time3;
       }
    else if ((time1<time3)&&(time3<time2))
       {
           cout<<run1<<"\t"<<setw(3)<<time1<<endl;
           cout<<run3<<"\t"<<setw(3)<<time3<<endl;
           cout<<run2<<"\t"<<setw(3)<<time2;
       }
    else if ((time2<time1)&&(time1<time3))
       {
           cout<<run2<<"\t"<<setw(3)<<time2<<endl;
           cout<<run1<<"\t"<<setw(3)<<time1<<endl;
           cout<<run3<<"\t"<<setw(3)<<time3;
       }
    else if ((time2<time3)&&(time3<time1))
       {
           cout<<run2<<"\t"<<setw(3)<<time2<<endl;
           cout<<run3<<"\t"<<setw(3)<<time3<<endl;
           cout<<run1<<"\t"<<setw(3)<<time1;
       }
    else if ((time3<time1)&&(time1<time2))
       {
           cout<<run3<<"\t"<<setw(3)<<time3<<endl;
           cout<<run1<<"\t"<<setw(3)<<time1<<endl;
           cout<<run2<<"\t"<<setw(3)<<time2;
       }
    else if ((time3<time2)&&(time2<time1))
       {
           cout<<run3<<"\t"<<setw(3)<<time3<<endl;
           cout<<run2<<"\t"<<setw(3)<<time2<<endl;
           cout<<run1<<"\t"<<setw(3)<<time1;
       }
    //Display the outputs
   
    //Exit stage right or left!
    return 0;
}

