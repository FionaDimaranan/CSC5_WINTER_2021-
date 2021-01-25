/* 
 * File:   main.cpp
 * Author: fiona
 * Created on January 5, 2021, 5:28 PM
 * Purpose: A customer in a store is purchasing five items. The prices of the 
 five items are: 
    Price of item 1 = $15.95 
    Price of item 2 = $24.95
    Price of item 3 = $6.95
    Price of item 4 = $12.95 
    Price of item 5 = $3.95 
 Write a program that holds the prices of the five items in five variables. 
 Display each item’s price, the subtotal of the sale, the amount of sales tax,
  and the total. Assume the sales tax is 7%
 */

//System Libraries
#include <iostream> //I/O/Library
#include <iomanip>  //Format Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal Constants, High Dimensional Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the random number seed
    
    //Declare Variables
    float itm1,         //item 1
          itm2,         //item 2
          itm3,         //item 3
          itm4,         //item 4
          itm5,         //item 5
          sbtotl,       //subtotal 
          sltax,        //sales tax
          total;        //grand total
    
    //Initialize Variables
    itm1=15.95;         //in $
    itm2=24.95;         //in $
    itm3=6.95;          //in $
    itm4=12.95;         //in $
    itm5=3.95;          //in $
            
    //map inputs to outputs -> process
    sbtotl=itm1+itm2+itm3+itm4+itm5;        //subtotal is sum of all 5 items
    sltax=sbtotl*0.07;                      //sales tax is 7% of subtotal
    total=sbtotl+sltax;                     //total is subtotal+sales tax
    
    //display inputs/outputs
    cout<<fixed<<showpoint<<setprecision(2)<<endl;
    
    cout<<"Price of item 1: $"<<itm1<<endl;
    cout<<"Price of item 2: $"<<itm2<<endl;
    cout<<"Price of item 3: $"<<itm3<<endl;
    cout<<"Price of item 4: $"<<itm4<<endl;
    cout<<"Price of item 5: $"<<itm5<<endl;
    
    cout<<"Subtotal of the sale: $"<<sbtotl<<endl;
    cout<<"Amount of sales tax: $"<<sltax<<endl;
    cout<<"Total: $"<<total<<endl;
    
    //exit program-cleanup
    return 0;
}

