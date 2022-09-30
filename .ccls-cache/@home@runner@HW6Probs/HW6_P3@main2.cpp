//Programer: John Thompson
//Description: HW6_P3
//Date: 09/27/2022

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double power_Gen(double H, double Q);

int main()
{
  cout << power_Gen(14, 20) << " Watts" << endl; // test #1

  cout << power_Gen(30, 20) << " Watts" << endl; // test #2
  
  return 0;
}

double power_Gen(double H, double Q)
{
  const double g = 9.81; // gravity

  double water_Density = 1000;

  return water_Density * Q * H * g; 
}
// test case #1: 2.7468e^06 Watts

// test case #2: 5.886e^06 Watts