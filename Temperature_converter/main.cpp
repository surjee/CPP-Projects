#include<iostream>
#include "header.h"

using namespace std;

int main()
{
    int choice;
    double temp, converted;
    while(true)
{
    //Display Menu
   cout <<"\nTemperature Converter\n";
   cout <<"1. Celsuis to Fahrenheit\n";
   cout <<"2. Fahrenhiet to Celsuis\n";
   cout <<"3. Exit\n";
   cout <<" Enter a number(1 - 3): ";
   cin >> choice;

   //Exit condition
   if(choice == 3)
   {
     cout <<"\nThank you.. Bye..";
     break;
   }
   //Celsuis to Fahrenheit conversion
   else if(choice == 1)
   {
      cout <<"\n Enter the temperature in celsuis: ";
      cin >> temp;
      converted = (temp * CeltoFeh) + fahOffset;
      cout <<endl<< temp <<" C = " << converted << "F"<<endl;
   }
   //Fahrenheit to Celsuis conversion
   else if(choice == 2)
   {
      cout <<"\n Enter the temperature in Fahrenheit: ";
      cin >> temp;
      converted = (temp - fahOffset) * FehtoCel;
      cout <<endl<< temp <<" F = " << converted << "C"<<endl;
   }
   else
   {
    cout<< "\nInvalid Option. \nPlease try again.\n";
   }
}
 return 0;
}
