#include<iostream>
using namespace std;
class OddEven {
 private:
  int start, end;
 public:
  void getRange() {
    cout << "Enter Range : ";
    cin >> start >> end;
  }
  void productOddEven() {
    int index, product_even = 1, product_odd = 1;
    for (index = start; index <= end; index++) {
      if (index % 2 == 0) {
        product_even = product_even * index;
      }
      else {
        product_odd = product_odd * index;
      }
    }

    cout << "Product of all even numbers is " << product_even << "\n"
         << "Product of all odd numbers is " << product_odd << endl;
  }
};

int main() 
{
  OddEven O;
  O.getRange();
  O.productOddEven();
  return 0;
}
