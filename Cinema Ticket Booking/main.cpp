#include<iostream>

using namespace std;

//const rows and columns
const int ROWS  = 5;
const int COLS  = 7;

//seat as array
int seat[ROWS][COLS] = {0};

//function to display seat available and booked
void viewseat()
{
    for(int i = 0; i < ROWS;i++)
    {
        for(int j = 0; j < COLS; j++)
        {
            cout << seat[i][j] << " ";
        }
        cout << endl;
    }

}

//function to book single seat
void booksingle()
{
    int r,c;
    cout << "\nEnter the ROW: ";
    cin  >> r;
    cout << "\nEnter the COL: ";
    cin >> c ;
    if(r >=0 && r < ROWS && c >= 0 && c < COLS && seat[r][c] == 0)
    {
        seat[r][c] = 1;
        cout <<"\nBooked Seat Successfully!";
    }
    else
    {
        cout <<"\nselected seat is booked or is invalid seat\n";
    }
    
}

//Function to book seat as a block
void bookblock()
{
    int r,c,count;bool canbook = true;
   cout << "\nEnter the ROW: ";
   cin  >> r;
   cout << "\nEnter the start Column: ";
   cin  >> c;
   cout << "Enter the count of seats: ";
   cin  >> count;
   if(r >= 0 && r < ROWS && c >= 0 && (c + count) <= COLS )
   {
     canbook = true;

    for(int i = 0; i < count; i++ )
   {
      if(seat[r][c+i] != 0)
      {
         canbook = false;
         break;
      }
   }
   if(canbook)
   {
      for(int i = 0; i < count; i++)
      {
        seat[r][c+i] = 1;
      }
      cout << "\nSeats are booked\n";
   }
   else
   {
    cout << "\nSeats are already booked!\n";
    return ;
   }

   }
   else
   {
      cout << "\nEntered seat is invalid\n";
   }
   return;
}

//function to cancel booked seat
void cancel()
{
    int r,c;
    cout << "Enter row and column seat to cancel:  ";
    cin >> r >> c;
    if(r >= 0 && r < ROWS && c >= 0 && c < COLS)
    {
      seat[r][c] = 0;
      cout << "Booking cancelled!";
    }
    else{
        cout << "\nInvalid seat number\n";
    }

}

//display available seat
void display()
{
   bool found = false;
   for(int i = 0; i < ROWS; i++ )
   {
    for(int j = 0; j < COLS; j++)
    {
        if(seat[i][j] == 0)
        {
            cout <<"Seat " << i <<" " <<j <<" available"<<endl;
            found = true;
        }
    }
   }
   if(!found)
   {
    cout << "No seat available!!";
   }
}
int main()
{
    int choice;

   while(true)
   {
     cout <<"\n******** TICKET BOOKING MENU *************"<<endl;
     cout <<"\n1. View Seat Layout \n";
     cout <<"\n2. Book Single Seat \n";
     cout <<"\n3. Book Block of seat \n";
     cout <<"\n4. Cancel Booked seat \n";
     cout <<"\n5. Display Available seat \n";
     cout <<"\n6. Exit Menu\n";
     cout <<"\nEnter a choice (1-6): ";
     cin >> choice;

     switch(choice)
     {
        case 1: viewseat();break;
        case 2: booksingle(); break;
        case 3: bookblock(); break;
        case 4: cancel(); break;
        case 5: display(); break;
        case 6: 
                cout << "Exiting...\n" <<" Thankyou bye \n";
                return 0;
        default:
                cout <<"Invaid option!!\n";
                break;
     }
   }
   return 0;
}