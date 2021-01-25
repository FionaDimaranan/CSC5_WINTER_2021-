/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on March 17th, 2020, 11:33 AM
 * Purpose: Menu to be utilized in Homework
 */

//System Level Libraries
#include <iostream>   //I/O Library
#include <string>
#include <iomanip>
using namespace std;  //Libraries compiled under std

//User Level Libraries

//Global Constants - Science/Math Related
//Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declarations
    char choice;

    //Display Menu
    cout<<"Menu Example for Homework"<<endl;
    cout<<"Type 1 for Gaddis Sort Names Problem"<<endl;
    cout<<"Type 2 for Gaddis Books Problem"<<endl;
    cout<<"Type 3 for Gaddis Bank Charges Problem"<<endl;
    cout<<"Type 4 for Gaddis Race Problem"<<endl;
    cout<<"Type 5 for Gaddis ISP Problem"<<endl;
    cout<<"Type 6 for Savitch Rock Paper Scissors Problem"<<endl;
    cout<<"Type 7 for Savitch Roman Conversion Problem"<<endl;
    cout<<"Type 8 for Savitch Compatible Signs Problem"<<endl;
    cin>>choice;
    
    if(choice=='1'){
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
    
    }else if(choice=='2'){
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
    
    }else if(choice=='3'){
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
        if (numCheck<0)
    {
             cout<<"Number of checks inputted is invalid.";
    }
        else if (numCheck>0)
    {
             
            if (begBal<0)
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
                 cout<<"New Balance $ "<<setw(8)<<newBal;}
    }
    }else if(choice=='4'){
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
    }else if(choice=='5'){
        //Declare Variables
        char pkg;
        float hours,        //inputted hours
             provHrs,      //provided hours
             addHrs,       //additional hours charge
            monChrg,      //monthly charge
            totChrg;  
        
        //Initialize or input i.e. set variable values
        cout<<"ISP Bill"<<endl;
        cout<<"Input Package and Hours"<<endl;
        cin>>pkg>>hours;
   
    //Map inputs -> outputs
       switch (pkg)
    { 
         case 'A':
            {
                monChrg=9.95f;
                provHrs=10;
                addHrs=2;
                break;
            }       
         case 'B':
            {
                monChrg=14.95f;
                provHrs=20;
                addHrs=1;
                break;
            }
         case 'C':
            {
                monChrg=19.95f;
                provHrs=0;
                addHrs=0;
                break;
            }
    }
    
      if (hours>provHrs)
        monChrg+=addHrs*(hours-provHrs);
     
   
            //Display the outputs
            cout<<fixed<<showpoint<<setprecision(2)<<"Bill = $ "<<setw(5)<<monChrg;

    }else if(choice=='6'){
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
        
    }else if(choice=='7'){
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
    
    }else if(choice=='8'){
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
    
    }else{
        cout<<"Not an Option"<<endl;
    }

    //Clean Up
    
    //Exit stage right!
    return 0;
}

