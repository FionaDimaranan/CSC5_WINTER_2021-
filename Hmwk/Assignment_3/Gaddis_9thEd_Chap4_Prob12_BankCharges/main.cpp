/* 
 * File:   main.cpp
 * Author: fiona
 * Created on January 14, 2021, 4:44 PM
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
    float begBal,       //beginning balance
          numCheck,     //number of checks written
          chckFee,      //check fee 
          monFee,       //monthly fee of $10      
          lowBal,       //low balance fee of $15 if balance is below $400
          newBal;       //new balance after fees
    
    //Initialize or input i.e. set variable values
    
    cout<<"Monthly Bank Fees"<<endl;
    cout<<"Input Current Bank Balance and Number of Checks"<<endl;
    cin>>begBal>>numCheck;
    
    //Map inputs -> outputs
        if (numCheck<0)       //input validation
    {
             cout<<"Number of checks inputted is invalid.";
    }
        else if (numCheck>0)
    {
             
            if (begBal<0)     //input validation
    {
                 cout<<"ACCOUNT IS OVERDRAWN.";
    }             
            else if (begBal>0)
    {
                 if (0<=numCheck&&numCheck<20)
                 chckFee=numCheck*0.10f;
        
                 else if (20<=numCheck&&numCheck<=39)
                 chckFee=numCheck*0.08f;
         
                 else if (40<=numCheck&&numCheck<=59)
                 chckFee=numCheck*0.06f;
        
                 else if (numCheck>59)
                 chckFee=numCheck*0.04f;
        
        
                 monFee=10;
                 begBal<400?lowBal=15.00:lowBal=0.00;
                 newBal=begBal-chckFee-monFee-lowBal;
    
    //Display the outputs
                 cout<<fixed<<showpoint<<setprecision(2);
                 cout<<"Balance     $ "<<setw(8)<<begBal<<endl;
                 cout<<"Check Fee   $ "<<setw(8)<<chckFee<<endl;
                 cout<<"Monthly Fee $ "<<setw(8)<<monFee<<endl;
                 cout<<"Low Balance $ "<<setw(8)<<lowBal<<endl;
                 cout<<"New Balance $ "<<setw(8)<<newBal;
    }
    }
    //Exit stage right or left!
    return 0;
}

