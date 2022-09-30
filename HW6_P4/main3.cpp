//Programer: John Thompson
//Description: HW6_P4
//Date: 09/27/2022

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int day;
int month;
int Date_Month();

int main()
{
    Date_Month();


  switch(Date_Month())
    {
      case 1:

        break;

      case 2:

        break;

      case 3:

        break;

      case 4:

        break;

      case 5:

        break;

      case 6:

        break;

      case 7:

        break;

      case 8:

        break;

      case 9:

        break;

      case 10:

        break;

      case 11:

        break;

      case 12:

        break;
    }
  

  return 0;
}

int Date_Month()
{
   cout << "Enter day of birth: ";
  cin >> day;

  cout << "Enter month of birth: ";
  cin >> month;

  if((day > 31) || (day <= 0))
  {
    cout << "Invalid date." << endl;
  }
  if((month > 12) || (month <= 0))
  {
    cout << "Invalid month." << endl;
  }
  else
  {
    cout << day <<" / "<< month << endl;
  }
  return 0;
}