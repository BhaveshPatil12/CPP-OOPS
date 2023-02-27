#include<iostream>
using namespace std;
class CelsiusToKelvin {
 private:
  float celsius;
 public:
  void getTemperature() {
    cout << "Enter Temperature in Celsius: ";
    cin >> celsius;
  }
  double CToK() {
    float kelvin;
    kelvin = celsius + 273.15;
    return kelvin;
  }
};

int main() 
{
  CelsiusToKelvin C;
  float temperature;
  C.getTemperature();
  temperature = C.CToK();
  cout << "Temperature in Kelvin : " << temperature;
  return 0;
}
