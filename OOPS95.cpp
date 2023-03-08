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
  void sumDiagonal() {
    int row, column, sumleft = 0, sumright = 0;
    cout << "\nEntered Matrix :" << endl;
    for (row = 0; row < 3; row++) {
      for (column = 0; column < 3; column++) {
        cout << matrix[row][column] << "  ";
      }
      cout << "\n";
    }
    cout << "\n";
    for (row = 0; row < 3; row++) {
      for (column = 0; column < 3; column++) {
        if (row == column) {
          sumleft = sumleft + matrix[row][column];
        }
        if ((row + column) == 2) {
          sumright = sumright + matrix[row][column];
        }
      }
    }
    cout << "Sum of Left diagonal is " << sumleft << endl;
    cout << "Sum of Right diagonal is " << sumright << endl;
  }
};
int main() {
  Matrix M;
  M.getMatrix();
  M.sumDiagonal();
  return 0;
}