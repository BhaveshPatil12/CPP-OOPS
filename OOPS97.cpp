#include<iostream>
using namespace std;
class Matrix {
 private:
  int matrix[3][3];
 public:
  void getMatrix() {
    cout << "Enter Matrix elements :" << endl;
    for (int row = 0; row < 3; row++) {
      for (int column = 0; column < 3; column++) {
        cout << "[" << row << "][" << column << "]: ";
        cin >> matrix[row][column];
      }
    }
  }
  void productRow() {
    int row, column, productrow;
    cout << "\nEntered Matrix :" << endl;
    for (row = 0; row < 3; row++) {
      for (column = 0; column < 3; column++) {
        cout << matrix[row][column] << "  ";
      }
      cout << "\n";
    }
    cout << "\n";
    for (row = 0; row < 3; row++) {
      productrow = 1;
      for (column = 0; column < 3; column++) {
        productrow = productrow * matrix[row][column];
      }
      cout << "Product of " << row << " row is " << productrow << endl;
    }
  }
};
int main() {
  Matrix M;
  M.getMatrix();
  M.productRow();
  return 0;
}