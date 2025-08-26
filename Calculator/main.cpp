#include<iostream>

using namespace std;

class calculator
{
    float a, b;
 public:
   void result()
   {
     cout << "\nEnter first number: ";
     cin >> a;
     cout << "\nEnter second number: ";
     cin >> b;
   }
   float add()
   {
     return a + b;
   }
   float sub()
   {
     return a - b;
   }
   float mul()
   {
     return a * b;
   }
   float div()
   {
     if(b == 0)
     {
         cout <<"Division by Zero" <<endl;
        return 0;
     }
     else{
        return a/b;
     }
   }

};


int main()
{
    int ch;
   calculator c;
   do
   {
    cout << "\nEnter 1 to add." << "\nEnter 2 to subtract." << "\nEnter 3 to Multiply" << "\nEnter 4 for Division\n" ;
    cin >> ch;
     switch(ch)
     {
        case 1:
              c.result();
              cout << "\nResult\n" << c.add();
              break;
        case 2:
             c.result();
             cout << "\nResult\n" << c.sub();
             break;
        case 3:
             c.result();
             cout << "\nResult\n" << c.mul();
             break;
        case 4:
            c.result();
            cout << "\nResult\n" << c.div();
            break;
             
     }
   } while (ch >0 && ch <= 4);
   
}