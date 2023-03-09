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
  void productDiagonal() {
    int row, column, productleft = 1, productright = 1;
    cout << "\nEntered Matrix :" << endl;
    for (row = 0; row < 3; row++) {
      for (column = 0; column < 3; column++) {
        cout << matrix[row][column] << "  ";
      }
      cout << "\n";
    }
    cout << "\n";
    for (row = 0; row < 3; row++) {
      for (column = 0; column < 3; column++) 
        if (row == column) {
          productleft = productleft * matrix[row][column];
        }
        if ((row + column) == 2) {
          productright = productright * matrix[row][column];
        }
      }
    }
    cout << "Product of Left diagonal is " << productleft << endl;
    cout << "Product of Right diagonal is " << productright << endl;
  }
};
int main() {
  Matrix M;
  M.getMatrix();
  M.productDiagonal();
  return 0;
}