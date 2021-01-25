/* 
 * File:   main.cpp
 * Author: fiona dimaraan
 * Created on January 14, 2021, 2:38 PM
 * Purpose:  Gaddis_9thEd_Chap4_Prob11_Books
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
    int numBook,        //number of books purchased
        numPnts;        //number of points earned
        
    //Initialize or input i.e. set variable values
    cout<<"Book Worm Points"<<endl;
    cout<<"Input the number of books purchased this month."<<endl;
    cin>>numBook;
    
    //Map inputs -> outputs
    if (numBook>=4)
    {
        cout<<setw(6)<<"Books purchased =  "<<numBook<<endl;
        cout<<setw(6)<<"Points earned   = 60";
    }
    else if (numBook==3)
    {
           cout<<setw(6)<<"Books purchased =  "<<numBook<<endl;
           cout<<setw(6)<<"Points earned   = 30";
    }
     else if (numBook==2)
    {
           cout<<setw(6)<<"Books purchased =  "<<numBook<<endl;
           cout<<setw(6)<<"Points earned   = 15";
    }
    else if (numBook==1)
    {
           cout<<setw(6)<<"Books purchased = "<<numBook<<endl;
           cout<<setw(6)<<"Points earned   = 5";
    }
     else if (numBook<=0)
    {
           cout<<setw(6)<<"Books purchased = "<<numBook<<endl;
           cout<<setw(6)<<"Points earned   = 0";
    }
    
    //Display the outputs
   
    //Exit stage right or left!
    return 0;
}
