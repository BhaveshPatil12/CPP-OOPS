#include<iostream>
using namespace std;
class ProductDigit {
 private:
  int start, end;
 public:
  void getNumbers() {
    cout << "Enter Numbers: ";
    cin >> start >> end;
  }
  int productDigit() {
    int index, temp, product = 1;
    for (index = start; index <= end; index++) {
      temp = index;
      while (temp > 0) {
        product = product * (temp % 10);
        temp = temp / 10;
      }
    }
    return product;
  }
};

int main() 
{
  ProductDigit P;
  int product;
  P.getNumbers();
  product = P.productDigit();
  cout << "Product of Digits : " << product;
  return 0;
}
