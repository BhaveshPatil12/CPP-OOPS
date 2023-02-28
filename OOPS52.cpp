#include<iostream>
using namespace std;
class FahrenheitToKelvin {
 private:
  float fahrenheit;
 public:
  void getTemperature() {
    cout << "Enter Temperature in Fahrenheit: ";
    cin >> fahrenheit;
}
  double FToK() {
    float kelvin;
    kelvin = (5.0 / 9) * (fahrenheit - 32) + 273.15;
    return kelvin;
  }
};

int main() 
{
  FahrenheitToKelvin F;
  float temperature;
  F.getTemperature();
  temperature = F.FToK();
  cout << "Temperature in Kelvin: " << temperature;
  return 0;
}
