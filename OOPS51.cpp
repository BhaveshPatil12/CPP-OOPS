#include<iostream>
using namespace std;
class KelvinToCelsius {
 private:
  float kelvin;
 public:
  void getTemperature() {
    cout << "Enter Temperature in Kelvin: ";
    cin >> kelvin;
  }
  double KToC() {
    float celsius;
    celsius = kelvin - 273.15;
    return celsius;
  }
};

int main() 
{
  KelvinToCelsius K;
  float temperature;
  K.getTemperature();
  temperature = K.KToC();
  cout << "Temperature in Celsius: " << temperature;
  return 0;
}
