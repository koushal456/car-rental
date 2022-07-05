#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

 struct Cars {

    string mark [10] = {"Maruthi Suzuki","Hyundai","FORD","TATA","Toyota","Skoda","BMW","Mercedes-Benz","Audi",};

    string model [10]= {"swift Dzire(2017)","i20(2016)","EcoSport(2018)","Nexon XZA (2021)","Fortuner(2020)","Octavia(2019)","X5 SportxPlus (2021)","GLE 350d (2018)","A3(2022)"};

    string color [10]={"WHITE","RED","BLUE","GREEN","BLACK","Silver","white","Black Metallic","Cosmos Blue"};

    string maxs_peed [10]={"100 Km/h ","150 Km/h","150 Km/h","170 Km/h","130 Km/h","140 Km/h","130 Km/h","120 Km/h","150 Km/h"};

    int price [ 10 ] ={3000,2700,3500,4500,5000,3700,8000,8500,9000} ;



   };

   struct Lessee {

   string Name [10];
   string Natio_ID [10] ;
   int payment_acc [ 10] ;
   };

   //Declaring struct
 Cars car ;
 Lessee lessee ;

 //First output
   void Minu ()
 {


   int num=1;
 for(int i=0 ;i<9;++i)
 {
     cout<<"\t\t\t";
    cout<<"Enter " <<num<<"\t- To Select  "<<car.mark[i]<<endl;
    num++ ;
 }

 }

 //Second output
 void Details (int theChoice)
  {
       system("CLS");
       cout<<"\n\n\n\t\t\t-----------------------------\n";
     cout<<"\t\t\tYou Have Selected - "<<car.mark[theChoice-1]<<endl;
     cout<<"\t\t\t-----------------------------\n\n\n";
     cout<<"\t\t\tModel : "<<car.model[theChoice-1]<<endl;
     cout<<"\t\t\tColor : "<<car.color[theChoice-1]<<endl;
     cout<<"\t\t\tMaximum Speed : "<<car.maxs_peed[theChoice-1]<<endl;
     cout<<"\t\t\tPrice : "<<"Rs."<<car.price[theChoice-1]<<" only/day"<<endl;


  }
   //check lessee credit

   void check (int j )
  {
      if(lessee.payment_acc[j]  >= car.price[j])
           cout<<"\n\n\n\t\t\tProcess has been done successfully!! "<<"\n\t\t\tCongratulations! You CAR is Booked... " <<endl;
           else
              cout<<"\n\n\n\t\t\tNot Available " <<endl;

  }
 //User Input for personal details
  void user_input (int theChoice)
   {
       system("CLS");
        int j=theChoice-1 ;
       cout<<"\t\t\t----------------------------------------\n";
       cout<<"\t\t\tPlease Provide Your Personal Details  : \n";
       cout<<"\t\t\t----------------------------------------\n\n";
       cout<<"\n\tNOTE:- PROVIDE FIRST NAME ONLY, DO NOT ENTER SPACE WHILE PROVIDING NAME.\n\tPAYMENT WON'T PROCEED IF THE GIVEN AMOUNT IS LESS THEN THE RATE OF CAR\n\n\n\n";
       cout<<"\t\t\tEnter Your Name :- ";
       cin>>lessee.Name[j];
       cout<<"\t\t\tEnter Your National ID :- ";
       cin>>lessee.Natio_ID[j] ;
       cout<<"\t\t\tPayment Amount: " ;
       cin>>lessee.payment_acc[j] ;


     check( j ) ;
   }


int main()
{
    int login();
    login();

         string decide ="yes" ;
     cout<<"\t\t\t----------------------------------------------\n";
     cout<<"\t\t\t\t CPP SQUAD CAR RENTALS \n";
     cout<<"\t\t\tWelcome to Our RENTAL SERVICE : "<<endl;
     cout<<"\t\t\tPlease Choose your CAR from the menu : "<<endl;
     cout<<"\t\t\t----------------------------------------------\n";
     while(decide!="exit")
     {
         Minu();
     cout<<"\n\n\n\t\t\tYour Choice: ";
     int theChoice ;
     cin>>theChoice ;
     Details(theChoice);
     cout<<"\n\n\n\t\t\tAre You Sure, you want to rent this Car? (yes /no /exit ) : ";
     cin>>decide ;
     if(decide=="yes") {
        user_input(theChoice);
        cout<<"\n\n\t\t\tDo you want to continue ?(yes/no) ";
        cin>>decide;
        if (decide=="no") break ;
system("CLS");
     }

   else {
      if(decide=="no")
      {
          system("CLS");
          continue ;
      }
     else if  (decide=="exit")
     {
        system("CLS");
         cout<<"\n\n\n\t\t\tThank you for your Visit";

         break ;
     }

   }
     }


    return 0;
}
//user input for login
int login(){
   string pass ="";
   char ch;
   cout<<"\n\t\t\t\t\t-----------------------\n";
   cout <<"\t\t\t\t\t CPP SQUAD CAR RENTALS ";
   cout<<"\n\t\t\t\t\t-----------------------\n";
   cout <<"\n\n\n\n\n\n\t\t\t\t\t Please Login with Password ";
   cout << "\n\n\n\t\t\t\t\t Enter Password: ";
   ch = _getch();
   while(ch != 13){//character 13 is enter
      pass.push_back(ch);
      cout << '*';
      ch = _getch();
   }
   if(pass == "0000"){
        cout<<"\n\n\n\n\t\t\t\t-------------------------------------------------\n";
      cout << "\t\t\t\t Access Granted! Welcome To Our RENTAL SERVICES \n";
    cout<<"\t\t\t\t-------------------------------------------------\n";
      system("PAUSE");
      system("CLS");

   }else{
      cout << "\n\n\n\n\t\t\t\t\tAccess Aborted...Please Try Again!!\n";
      system("PAUSE");
      system("CLS");
      login();
   }
}
