/* 
 * File:   main.cpp
 * Author: fiona
 * Created on January 5, 2021, 2:54 PM
 * Purpose: Write a program that computes the tax and tip on a restaurant bill 
 for a patron with a $88.67 meal charge. The tax should be 6.75 percent of the
 meal cost. The tip should be 20 percent of the total after adding the tax. 
 Display the meal cost, tax amount, tip amount, and total bill on the screen
 */

//System Libraries
#include <iostream> //I/O/Library
#include <iomanip>  //learned from Elizabeth in lab

using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal Constants, High Dimensional Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the random number seed
    
    //Declare Variables
    float mlcost,           //meal cost
          tax,
          tip,
          total;
    
    //Initialize Variables
     mlcost= 88.67;               //initial cost of restaurant bill 
    
    //map inputs to outputs -> process
    tax= 0.0675*mlcost;          //6.75% of meal cost
    tip= 0.2*(tax+mlcost);       //20% of meal cost after adding tax
    total=mlcost+tax+tip;        //total bill cost after adding tax and tip
 
    //display inputs/outputs
    cout<<fixed<<showpoint<<setprecision(2); //learned from lab aid
    cout<<"meal cost = $"<<mlcost<<endl;
    cout<<"tax amount = $"<<tax<<endl;
    cout<<"tip amount = $"<<tip<<endl;
    cout<<"total bill = $"<<total<<endl;
           
    //exit program-cleanup
    return 0;
}
