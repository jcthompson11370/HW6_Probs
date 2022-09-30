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
      case (21/ 3) > (20/ 4):

        cout << "Aries" << endl;
        break;

      case 2:

        cout << "Taurus" << endl;
        break;

      case 3:

        cout << "Gemini" << endl;
        break;

      case 4:

        cout << "Cancer" << endl;
        break;

      case 5:

        cout << "Leo" << endl;
        break;

      case 6:

        cout << "Virgo" << endl;
        break;

      case 7:

        cout << "Libra" << endl;
        break;

      case 8:

        cout << "Scorpio" << endl;
        break;

      case 9:

        cout << "Sagittarius" << endl;
        break;

      case 10:

        cout << "Capricorn" << endl;
        break;

      case 11:

        cout << "Aquarius" << endl;
        break;

      case 12:

        cout << "Pisces" << endl;
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