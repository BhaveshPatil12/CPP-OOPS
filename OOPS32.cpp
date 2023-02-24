#include<iostream>
using namespace std;
class Prime {
 private:
  int start, end;
 public:
  void getRange() {
    cout << "Enter Range: ";
    cin >> start >> end;
  }
  int productPrime() {
    int index_1, index_2, product = 1, check = 1;
    cout << "Prime Numbers in the range " << start << " to " << end << " are ";
    for (index_1 = start; index_1 <= end; index_1++) {
      int check = 0;
      for (index_2 = 2; index_2 < index_1; index_2++) {
        if (index_1 % index_2 == 0) {
          check++;
          break;
        }
      }
      if (check == 0) {
        cout << index_1 << " ";
        product = product * index_1;
      }
    }
    return product;
  }
};

int main() 
{
  Prime P;
  int product;
  P.getRange();
  product = P.productPrime();
  cout << "\nProduct of prime numbers in range is " << product;
  return 0;
}
