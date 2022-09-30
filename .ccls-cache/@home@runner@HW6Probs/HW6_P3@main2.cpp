//Programer: John Thompson
//Description: HW6_P3
//Date: 09/27/2022

#include <iostream>

using namespace std;

double power_Gen(double H, double Q);

int main()
{
  
}

double power_Gen(double H, double Q)
{
  const double g = 9.81; // gravity

  double water_Density = 1000;

  return water_Density * Q * H * g; 
}