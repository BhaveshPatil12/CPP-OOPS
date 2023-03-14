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
        cout << "[" << column << "][" << column << "]:";
        cin >> matrix[row][column];
      }
    }
  }
  void productColumn() {
    int row, column, productcolumn;
    cout << "\nEntered Matrix :" << endl;
    for (row = 0; row < 3; row++) {
      for (column = 0; column < 3; column++) {
        cout << matrix[row][column] << "  ";
      }
      cout << "\n";
    }
    cout << "\n";
    for (row = 0; row < 3; row++) {
      productcolumn = 1;
      for (column = 0; column < 3; column++) {
        productcolumn = productcolumn * matrix[column][row];
      }
      cout << "Product of " << row << " column is " << productcolumn << endl;
    }
  }
};
int main() {
  Matrix M;
  M.getMatrix();
  M.productColumn();
  return 0;
}