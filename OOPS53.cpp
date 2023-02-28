#include<iostream>
using namespace std;
class KelvinToFahrenheit {
 private:
  float kelvin;
 public:
  void getTemperature() {
    cout << "Enter Temperature in Kelvin: ";
    cin >> kelvin;
  }
  double KToF() {
    float fahrenheit;
    fahrenheit = (9.0 / 5) * (kelvin - 273.15) + 32;
    return fahrenheit;
  }
};

int main() 
{
  KelvinToFahrenheit K;
  float temperature;
  K.getTemperature();
  temperature = K.KToF();
  cout << "Temperature in Fahrenheit: " << temperature;
  return 0;
}
