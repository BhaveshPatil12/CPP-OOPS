#include<iostream>
using namespace std;
class Product {
  private:
    int number;
  public:
    void getNumber() {
      cout << "Enter Number:";
      cin >> number;
    }
  int multiply() {
    int product = 1, remain;
    while (number) {
      remain = number % 10;
      product = product * remain;
      number = number / 10;
    }
    return product;
  }
};

int main() 
{
  Product P;
  int product;
  P.getNumber();
  product = P.multiply();
  cout << "Product of all digits of the number is " << product;
  return 0;
}
